#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n == 0)
    {
        cout << 0;
        return 0;
    }

    vector<int> lev(n);
    for (int i = 0; i < n; i++)
    {
        cin >> lev[i];
    }

    sort(lev.begin(), lev.end());

    double sum = 0;
    int num = (int)(n * 0.15 + 0.5);
    for (int i = num; i < n - num; i++)
    {
        sum += lev[i];
    }

    int res = (sum / (n - 2 * num)) + 0.5;

    cout << res;
}