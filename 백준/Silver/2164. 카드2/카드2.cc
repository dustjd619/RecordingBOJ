#include <iostream>
#include <queue>
#define endl '\n'
using namespace std;

int main()
{
    int N;
    cin >> N;

    queue<int> q;
    for (int i = 1; i <= N; i++)
    {
        q.push(i);
    }

    int a;
    while (!(q.size() == 1))
    {

        q.pop();

        if (!q.empty())
        {
            a = q.front();
            q.pop();
            q.push(a);
        }
    }
    cout << q.front() << endl;
}