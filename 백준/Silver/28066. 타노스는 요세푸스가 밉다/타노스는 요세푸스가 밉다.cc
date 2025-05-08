#include <iostream>
#include <queue>
#define endl '\n'
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;

    queue<int> sqr;
    for (int i = 0; i < N; i++)
    {
        sqr.push(i + 1);
    }

    while (sqr.size() >= K)
    {
        sqr.push(sqr.front());
        sqr.pop();
        
        for (int i = 0; i < K - 1; i++)
        {
            sqr.pop();
        }
    }

    cout << sqr.front();
}