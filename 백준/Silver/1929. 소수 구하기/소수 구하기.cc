#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int M, N;
    cin >> M >> N;

    for (int i = M; i <= N; i++)
    {
        bool flag = false;
        int num = sqrt(i);
        for (int j = 2; j <= num; j++)
        {
            if (i % j == 0)
            {
                flag = true;
                break;
            }
        }

        if (i == 1)
        {
            continue;
        }

        if (!flag)
        {
            cout << i << '\n';
        }
    }
}