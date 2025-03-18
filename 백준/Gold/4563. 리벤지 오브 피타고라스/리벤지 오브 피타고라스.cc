#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        long long a;
        cin >> a;
        if (a == 0)
        {
            break;
        }

        /*
        c+b = x, c-b = y
        a^2 = x*y
        c = (x+y)/2,b=(x-y)/2
        a < (x-y)/2
        1<=y<a
        */
        int cnt = 0;
        for (int i = 1; i < a; i++)
        {
            if (a * a % i == 0)
            {
                int y = i;
                long long x = a * a / y;

                if (a < (x - y) / 2 && x % 2 == y % 2)
                {
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }
}