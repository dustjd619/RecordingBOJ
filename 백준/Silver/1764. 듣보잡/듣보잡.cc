#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    unordered_map<string, int> H;
    vector<string> S;

    for (int i = 0; i < N; i++)
    {
        string key;
        cin >> key;
        H[key] = 1;
    }
    for (int i = 0; i < M; i++)
    {
        string key;
        cin >> key;
        if (H.find(key) != H.end())
        {
            S.push_back(key);
        }
    }

    sort(S.begin(), S.end());

    cout << S.size() << endl;

    for (string a : S)
    {
        cout << a << endl;
    }
}