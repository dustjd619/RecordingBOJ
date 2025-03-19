#include <iostream>
using namespace std;

int arr[10001];

void d(int n)
{
    if (n >= 10000)
    {
        return;
    }

    int ans = n;
    while (n != 0)
    {
        ans += n % 10;
        n /= 10;
    }

    arr[ans] = 1;
    d(ans);
}

int main()
{
    for (int i = 1; i <= 10000; i++)
    {
        d(i);
    }

    for (int i = 1; i <= 10000; i++)
    {
        if (arr[i] == 0)
        {
            cout << i << "\n";
        }
    }
}