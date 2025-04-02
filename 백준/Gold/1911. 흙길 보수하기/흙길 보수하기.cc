#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N, L;
    cin >> N >> L;

    vector<pair<int, int>> p(N);
    for (int i = 0; i < N; i++)
    {
        cin >> p[i].first >> p[i].second;
    }

    sort(p.begin(), p.end());

    int now = 0, cnt = 0;
    for (int i = 0; i < N; i++)
    {
        int s = max(now, p[i].first);
        int e = p[i].second;

        if (s >= e)
        {
            continue;
        }

        int len = e - s;
        int need = (len % L == 0 ? len / L : len / L + 1);

        cnt += need;
        now = s + need * L;
    }
    cout << cnt;
}