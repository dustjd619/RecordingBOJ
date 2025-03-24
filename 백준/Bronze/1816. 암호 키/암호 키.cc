#include <iostream>
#define endl "\n"
using namespace std;

int main()
{
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        long long S;
        cin >> S;

        bool flag = true;
        for (long long j = 2; j <= 1000000; j++)
        {
            if (S % j == 0)
            {
                flag = false;
                break;
            }
        }

        if (!flag)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}