#include <iostream>
#define endl "\n"
using namespace std;

int main()
{
    long long A, B;
    cin >> A >> B;

    int cnt = 0;
    bool flag = true;
    while (A != B)
    {
        if (B % 10 == 1)
        {
            B /= 10;
            cnt++;
        }

        else if (B % 2 == 0 && B >= A)
        {
            B /= 2;
            cnt++;
        }

        else
        {
            flag = false;
            break;
        }
    }

    if (!flag)
    {
        cout << -1;
    }
    else
    {
        cout << cnt + 1;
    }
}