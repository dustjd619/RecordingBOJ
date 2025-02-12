#include <iostream>
using namespace std;

int main()
{
    cout << "n " << 'e' << "\n";
    cout << "- " << "-----------" << "\n";

    double res = 0;
    int d = 1;
    for (int i = 0; i < 10; i++)
    {
        if (i == 0)
        {
            d = 1;
        }
        else
        {
            d *= i;
        }
        res += (1 / (double)d);

        if (i <= 2)
        {
            cout << i << ' ' << res << '\n';
        }
        else
        {
            cout << fixed;
            cout.precision(9);
            cout << i << ' ' << res << '\n';
        }
    }
}