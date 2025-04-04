#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<pair<long long, long long>> H(n);
    for (int i = 0; i < n; i++)
    {
        cin >> H[i].second;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> H[i].first;
    }

    sort(H.begin(), H.end());

    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += H[i].second + i * H[i].first;
    }

    cout << sum;
}