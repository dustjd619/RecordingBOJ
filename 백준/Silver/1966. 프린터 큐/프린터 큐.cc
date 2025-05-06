#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#define endl '\n'
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, M;
        cin >> N >> M;

        queue<pair<int, int>> doc;
        vector<int> R;
        for (int i = 0; i < N; i++)
        {
            int imp;
            cin >> imp;

            doc.push({imp, i});
            R.push_back(imp);
        }

        sort(R.rbegin(), R.rend());

        int cnt = 0, idx = 0;
        while (!doc.empty())
        {
            pair<int, int> cur = doc.front();
            doc.pop();

            if (cur.first == R[idx])
            {
                cnt++;
                idx++;

                if (cur.second == M)
                {
                    cout << cnt << endl;
                    break;
                }
            }
            else
            {
                doc.push(cur);
            }
        }
    }
}