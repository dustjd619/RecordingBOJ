#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;

        vector<pair<int, int>> s(N);
        for (int i = 0; i < N; i++)
        {
            cin >> s[i].first >> s[i].second;
        }

        sort(s.begin(), s.end());

        int cnt = 1;
        int highrank = s[0].second; // 면접 등수
        for (int i = 1; i < N; i++)
        {
            if (highrank > s[i].second)
            {
                cnt++;
                highrank = s[i].second;
            }
        }

        cout << cnt << endl;
    }
}