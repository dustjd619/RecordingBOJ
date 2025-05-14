#include <iostream>
#include <vector>
#include <stack>
#define endl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    stack<pair<int, int>> t;

    vector<int> score(N);
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        if (a == 1)
        {
            int time;
            cin >> score[i] >> time;

            if (time > 1)
            {
                t.push({time - 1, i});
            }
            else
            {
                sum += score[i];
            }
        }
        else // a == 0
        {
            if (!t.empty())
            {
                pair<int, int> temp = t.top();
                if (temp.first - 1 > 0)
                {
                    t.pop();
                    t.push({temp.first - 1, temp.second});
                }
                else
                {
                    t.pop();
                    sum += score[temp.second];
                }
            }
        }
    }

    cout << sum << endl;
}
