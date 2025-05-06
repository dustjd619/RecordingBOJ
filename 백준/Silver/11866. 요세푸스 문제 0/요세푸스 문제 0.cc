#include <iostream>
#include <queue>
#include <vector>
#define endl '\n'
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;

    queue<int> q;
    for (int i = 1; i <= N; i++)
    {
        q.push(i);
    }

    vector<int> res;
    int i = 0;
    while (!q.empty())
    {
        for (int i = 0; i < K - 1; i++)
        {
            q.push(q.front());
            q.pop();
        }

        res.push_back(q.front());
        q.pop();
    }

    cout << '<';
    for (int i = 0; i < N; i++)
    {
        cout << res[i];

        if (i != N - 1)
        {
            cout << ", ";
        }
    }

    cout << '>';
}