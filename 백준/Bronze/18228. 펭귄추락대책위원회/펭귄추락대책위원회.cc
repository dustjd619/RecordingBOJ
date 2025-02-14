#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> F(N);
    for (int i = 0; i < N; i++)
    {
        cin >> F[i];
    }

    int p = distance(F.begin(), find(F.begin(), F.end(), -1));

    int res1 = F[0], res2 = F[p + 1];
    for (int i = 0; i < p; i++)
    {
        if (res1 > F[i])
        {
            res1 = F[i];
        }
    }
    for (int i = p + 1; i < N; i++)
    {
        if (res2 > F[i])
        {
            res2 = F[i];
        }
    }

    cout << res1 + res2;
}