#include <iostream>
#define endl '\n'
using namespace std;

int main()
{
    int a;
    cin >> a;

    int change = 1000 - a;
    int cnt = 0;
    int coins[6] = {500, 100, 50, 10, 5, 1};
    for (int i = 0; i < 6; i++)
    {
        cnt += change / coins[i];
        change %= coins[i];
    }

    cout << cnt;
}