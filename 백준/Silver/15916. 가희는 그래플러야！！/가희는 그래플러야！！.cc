#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long long k;
    cin >> k;

    bool isCross = false;
    if (arr[0] < k)
    {
        for (int i = 1; i < n; i++)
        {
            if (k * (i + 1) <= arr[i])
            {
                isCross = true;
                break;
            }
        }
    }
    else if (arr[0] > k)
    {
        for (int i = 1; i < n; i++)
        {
            if (k * (i + 1) >= arr[i])
            {
                isCross = true;
                break;
            }
        }
    }
    else
    {
        isCross = true;
    }

    cout << (isCross ? 'T' : 'F');
}