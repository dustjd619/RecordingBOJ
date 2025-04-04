#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int sum = 0;
    vector<int> h(9);
    for (int i = 0; i < 9; i++)
    {
        cin >> h[i];
        sum += h[i];
    }

    sort(h.begin(), h.end());

    int a, b;
    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
            if (sum - h[i] - h[j] == 100)
            {
                a = i, b = j;
                break;
            }
        }
    }

    for (int k = 0; k < 9; k++)
    {
        if (k == a || k == b)
        {
            continue;
        }

        cout << h[k] << '\n';
    }
}