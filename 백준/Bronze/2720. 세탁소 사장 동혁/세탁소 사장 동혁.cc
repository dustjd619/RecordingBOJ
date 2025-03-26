#include <iostream>
#define endl "\n"
using namespace std;

int main()
{
    int T;
    cin >> T;

    /*Q: 25, D: 10, N: 5,P: 1*/
    for (int i = 0; i < T; i++)
    {
        int C;
        cin >> C;

        int Q = 0, D = 0, N = 0, P = 0;
        while (C)
        {
            if (C >= 25)
            {
                Q++;
                C -= 25;
            }
            else if (C >= 10)
            {
                D++;
                C -= 10;
            }
            else if (C >= 5)
            {
                N++;
                C -= 5;
            }
            else
            {
                P++;
                C -= 1;
            }
        }
        cout << Q << ' ' << D << ' ' << N << ' ' << P << endl;
    }
}