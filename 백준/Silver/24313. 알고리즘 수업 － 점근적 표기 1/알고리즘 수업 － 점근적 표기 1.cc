#include <iostream>
using namespace std;

int main()
{
    int a, b, c, m;
    cin >> a >> b >> c >> m;
    if (c == a)
    {
        if (b <= 0)
        {
            cout << 1;
        }
        else
        {
            cout << 0;
        }
    }
    else if (c - a < 0)
    {
        cout << 0;
    }
    else if (b / (c - a) <= m)
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
}