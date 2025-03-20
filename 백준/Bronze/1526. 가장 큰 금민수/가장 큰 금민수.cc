#include <iostream>
using namespace std;

int N, res = 0;

void num(int n)
{
    if (N < n)
    {
        return;
    }
    if (n <= N && res <= n)
    {
        res = n;
    }

    num(n * 10 + 4);
    num(n * 10 + 7);
}

int main()
{
    cin >> N;
    num(0);

    cout << res;
}