#include <iostream>
using namespace std;

int main()
{
    int x, N;
    cin >> x >> N;

    for (int i = 0; i < N; i++)
    {
        if (x % 2 == 0) // 짝수
        {
            x = ((x / 2) ^ 6);
        }
        else // 홀수
        {
            x = ((2 * x) ^ 6);
        }
    }

    cout << x;
    return 0;
}