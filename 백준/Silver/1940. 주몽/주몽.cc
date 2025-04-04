#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    vector<int> m(N);
    for (int i = 0; i < N; i++)
    {
        cin >> m[i];
    }

    sort(m.begin(), m.end());

    int cnt = 0;
    int l = 0, r = N - 1;
    while (l < r)
    {
        int sum = m[l] + m[r];
        if (sum == M)
        {
            cnt++;
            l++;
            r--;
        }
        else if (sum < M)
        {
            l++;
        }
        else
        {
            r--;
        }
    }

    cout << cnt;
}