#include <iostream>
#include <vector>
#define endl "\n"
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> H(N);
    for (int i = 0; i < N; i++)
    {
        cin >> H[i];
    }

    int res = H[0], cnt = 0, maxcnt = 0;
    for (int i = 1; i < N; i++)
    {
        if (H[i] > res)
        {
            res = H[i];
            if (cnt > maxcnt)
            {
                maxcnt = cnt;
            }
            cnt = 0;
            continue;
        }
        cnt++;
    }

    if (cnt > maxcnt)
    {
        maxcnt = cnt;
    }

    cout << maxcnt;
}