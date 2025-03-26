#include <iostream>
#include <vector>
#include <algorithm>
#define endl '\n'
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.first - a.second > b.first - b.second;
}

int main()
{
    int N, X;
    cin >> N >> X;

    int sum = 0;
    vector<pair<int, int>> F(N);
    for (int i = 0; i < N; i++)
    {
        cin >> F[i].first >> F[i].second;
        sum += F[i].second;
        X -= 1000;
    }

    sort(F.begin(), F.end(), cmp);

    for (int i = 0; i < N; i++)
    {
        if (X >= 4000 && F[i].first - F[i].second > 0)
        {
            sum = sum - F[i].second + F[i].first;
            X -= 4000;
        }
        else
            break;
    }

    cout << sum;
}