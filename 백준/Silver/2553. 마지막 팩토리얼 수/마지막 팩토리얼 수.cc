#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long N;
    cin >> N;

    long long res = 1;
    for (long long i = 1; i < N + 1; i++)
    {
        res *= i;
        while (res % 10 == 0)
        {
            res /= 10;
        }
        res %= 1000000000000LL;
    }

    cout << res % 10;
}