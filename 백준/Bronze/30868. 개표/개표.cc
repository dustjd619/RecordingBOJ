#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;

        int p = n / 5;
        int b = n % 5;
        while (p--)
        {
            cout << "++++";
            cout << ' ';
        }

        while (b--)
        {
            cout << '|';
        }
        cout << '\n';
    }
}