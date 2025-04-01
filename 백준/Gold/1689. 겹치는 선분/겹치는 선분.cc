#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<pair<int, int>> l;
    for (int i = 0; i < N; i++)
    {
        int s, e;
        cin >> s >> e;
        l.push_back({s, 1});
        l.push_back({e, 0});
    }

    sort(l.begin(), l.end());

    int cnt = 0, maxcnt = 1;
    for (int i = 0; i < l.size(); i++)
    {
        if (l[i].second == 1)
        {
            cnt++;
        }
        else
        {
            if (cnt > maxcnt)
            {
                maxcnt = cnt;
            }
            cnt--;
        }
    }

    cout << maxcnt;
}