#include <iostream>
#include <stack>
#define endl '\n'
using namespace std;

int main()
{
    int N;
    cin >> N;

    stack<char> s;

    int day = 0;
    for (int i = 0; i < N; i++)
    {
        char a;
        cin >> a;

        if (s.empty() || s.top() == a)
        {
            s.push(a);
        }
        else if (!s.empty() || s.top() != a)
        {
            s.pop();
        }

        if (s.size() > day)
        {
            day = s.size();
        }
    }

    if (!s.empty())
    {
        cout << -1 << endl;
    }
    else
    {
        cout << day << endl;
    }
}