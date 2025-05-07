#include <iostream>
#include <vector>
#include <queue>
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, K;
    cin >> N >> K;

    vector<queue<int>> len(21);
    long long cnt = 0;

    for (int i = 0; i < N; i++)
    {
        string name;
        cin >> name;
        int l = name.size();

        while (!len[l].empty() && i - len[l].front() > K)
        {
            len[l].pop();
        }

        cnt += len[l].size(); 
        len[l].push(i);       
    }

    cout << cnt << endl;
}