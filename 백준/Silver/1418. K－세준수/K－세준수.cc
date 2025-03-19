#include <iostream>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;

    int cnt = 0;
    for (int i = 1; i <= N; i++)
    {
        bool sejun = true;
        int num = i;
        int j = 2;
        while (num > 1)
        {
            if (j > K)
            {
                sejun = false;
                break;
            }
            if (num % j == 0)
            {
                num /= j;
            }
            else
            {
                j++;
            }
        }
        if (sejun == true)
        {
            cnt++;
        }
    }
    cout << cnt;
}