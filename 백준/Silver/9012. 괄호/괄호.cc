#include <iostream>
#define endl "\n"
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string S;
        cin >> S;

        int res = 0;
        for (char a : S)
        {
            if (a == '(')
                res++;

            else
                res--;

            if (res < 0)
            {
                break;
            }
        }

        cout << (res == 0 ? "YES" : "NO") << endl;
    }
}