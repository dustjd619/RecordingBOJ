#include <iostream>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;

    int cnt = 0, res = 0;
    for (int i = 1; i <= N; i++)
    {
        if (N % i == 0)
        {
            cnt++;
            if (K == cnt)
            {
                res = i;
                break;
            }
        }
    }

    cout << res;
}