#include <iostream>
#include <vector>
#include <algorithm>
#define endl '\n'
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> tri(N);
    for (int i = 0; i < N; i++)
    {
        cin >> tri[i];
    }

    sort(tri.begin(), tri.end(), greater<int>());

    bool flag = false;
    for (int i = 0; i < N - 2; i++)
    {
        if (tri[i] < tri[i + 1] + tri[i + 2])
        {
            cout << tri[i] + tri[i + 1] + tri[i + 2];
            flag = true;
            break;
        }
    }

    if (!flag)
    {
        cout << -1;
    }
}