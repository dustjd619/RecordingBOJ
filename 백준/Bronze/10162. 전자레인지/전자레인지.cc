#include <iostream>
#define endl '\n'
using namespace std;

int main()
{
    /*A=300s,B=60s,C=10s*/
    int T;
    cin >> T;

    int cnt[3] = {0, 0, 0};
    int time[3] = {300, 60, 10};

    int i = 0;
    bool flag = true;
    while (T > 0)
    {
        if (i == 3 && T > 0)
        {
            flag = false;
            break;
        }

        cnt[i] += T / time[i];
        T %= time[i];
        i++;
    }

    if (flag)
    {
        cout << cnt[0] << ' ' << cnt[1] << ' ' << cnt[2];
    }
    else
    {
        cout << -1;
    }
}