#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> t(N);
    for (int i = 0; i < N; i++)
    {
        cin >> t[i];
    }

    sort(t.begin(), t.end());

    int sum = 0, res = 0;
    for (int a : t)
    {
        sum += a;
        res += sum;
    }

    cout << res;
}