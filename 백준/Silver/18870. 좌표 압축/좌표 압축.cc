#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> c1(N); // 원본
    for (int i = 0; i < N; i++)
    {
        cin >> c1[i];
    }

    vector<int> c2 = c1;
    sort(c2.begin(), c2.end());

    int rank = 0;
    map<int, int> res;
    for (int a : c2)
    {
        if (res.count(a) == 0)
        {
            res[a] = rank++;
        }
    }

    for (int a : c1)
    {
        cout << res[a] << ' ';
    }
}