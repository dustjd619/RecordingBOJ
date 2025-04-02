#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.second != b.second)
    {
        return a.second < b.second;
    }
    else
    {
        return a.first < b.first;
    }
}

int main()
{
    int N;
    cin >> N;

    vector<pair<int, int>> t(N);
    for (int i = 0; i < N; i++)
    {
        cin >> t[i].first >> t[i].second;
    }

    sort(t.begin(), t.end(), cmp);

    int cnt = 1;
    int end = t[0].second;
    for (int i = 1; i < N; i++)
    {
        if (t[i].first >= end)
        {
            cnt++;
            end = t[i].second;
        }
    }

    cout << cnt;
}