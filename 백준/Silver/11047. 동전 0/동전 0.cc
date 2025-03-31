#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, k;
    cin >> N >> k;

    vector<pair<int, int>> value(N);
    for (int i = 0; i < N; i++)
    {
        cin >> value[i].first;
        value[i].second = 0;
    }

    for (int i = N - 1; i >= 0; i--)
    {
        if (k / value[i].first != 0)
        {
            value[i].second += k / value[i].first;
            k %= value[i].first;
            if (k == 0)
            {
                break;
            }
        }
    }

    int cnt = 0;
    for (int i = 0; i < N; i++)
    {
        if (value[i].second > 0)
        {
            cnt += value[i].second;
        }
    }

    cout << cnt;
}