#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> num(n);
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    int x;
    cin >> x;

    sort(num.rbegin(), num.rend());

    int cnt = 0;
    int l = 0, r = n - 1;
    while (l < r)
    {
        if (num[l] + num[r] == x)
        {
            cnt++;
            l++;
            r--;
        }
        else if (num[l] + num[r] > x)
        {
            l++;
        }
        else
        {
            r--;
        }
    }

    cout << cnt;
}