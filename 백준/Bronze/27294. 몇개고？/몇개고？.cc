#include <iostream>
using namespace std;

int main()
{
    int T, S;
    cin >> T >> S;

    if ((T >= 12 && T <= 16) && S == 0)
    {
        cout << 320;
    }
    else
    {
        cout << 280;
    }
}