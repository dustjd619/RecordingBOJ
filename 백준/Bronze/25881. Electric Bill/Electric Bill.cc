#include <iostream>
#define endl "\n"
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;

    int C;
    cin >> C;

    while (C--)
    {
        int chr;
        cin >> chr;

        int res;
        if (chr >= 1000)
        {
            res = 1000 * A + (chr - 1000) * B;
        }
        else
        {
            res = chr * A;
        }

        cout << chr << ' ' << res << endl;
    }
}