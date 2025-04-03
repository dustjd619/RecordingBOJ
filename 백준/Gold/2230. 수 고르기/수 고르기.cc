#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    vector<int> num(N);
    for (int i = 0; i < N; i++)
    {
        cin >> num[i];
    }

    sort(num.begin(), num.end()); // 1 3 5

    int a = 0, b = 0;
    int res = 2147483647;
    while (a <= b && b < N)
    {
        int gap = num[b] - num[a];

        if (M <= gap)
        {
            if (gap < res)
            {
                res = gap;
            }
            a++;
        }
        else
        {
            b++;
        }
    }

    cout << res;
}