#include <iostream>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;

    int cnt = 0;
    while (true)
    {
        if (A <= 1 || B == 0)
        {
            break;
        }

        A -= 2;
        B -= 1;
        cnt++;
    }

    cout << cnt;
}