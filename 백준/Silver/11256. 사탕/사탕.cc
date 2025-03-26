#include <iostream>
#include <vector>
#include <algorithm>
#define endl "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;
    while (T--)
    {
        int J, N, sum = 0, cnt = 0;
        cin >> J >> N;

        vector<int> size;

        for (int i = 0; i < N; i++)
        {
            int a, b;
            cin >> a >> b;

            size.push_back(a * b);
        }

        sort(size.begin(), size.end(), greater<int>());

        for (int i = 0; i < N; i++)
        {
            sum += size[i];
            cnt++;
            if (sum >= J)
            {
                break;
            }
        }

        cout << cnt << endl;
    }
}