#include <iostream>
#include <queue>
#define endl '\n'
using namespace std;

int main()
{
    int N;
    cin >> N;

    queue<pair<string, int>> stu;
    pair<string, int> cur;
    for (int i = 0; i < N; i++)
    {
        cin >> cur.first >> cur.second;
        stu.push(cur);
    }

    while (!(stu.size() == 1))
    {
        cur = stu.front();
        stu.pop();

        for (int i = 0; i < cur.second - 1; i++)
        {
            stu.push(stu.front());
            stu.pop();
        }

        stu.pop();
    }

    cout << stu.front().first << endl;
}