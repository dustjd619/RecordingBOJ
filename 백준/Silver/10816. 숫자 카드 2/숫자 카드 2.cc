#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    int N, M;

    cin >> N;
    vector<int> S(N);
    for (int i = 0; i < N; i++)
    {
        cin >> S[i];
    }

    cin >> M;
    unordered_map<int, int> C;
    vector<int> order(M);

    int key;
    for (int i = 0; i < M; i++)
    {
        cin >> key;
        order[i] = key;
        C[key] = 0;
    }

    for (auto s : S)
    {
        if (C.find(s) != C.end())
        {
            C[s]++;
        }
    }

    for (auto k : order)
    {
        cout << C[k] << ' ';
    }
}