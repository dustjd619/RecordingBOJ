#include <iostream>
#include <stack>
#define endl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;

    stack<int> s;
    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;

        if (a == 1)
        {
            int x;
            cin >> x;
            s.push(x);
        }
        else if (a == 2)
        {
            if (!s.empty())
            {
                cout << s.top() << endl;
                s.pop();
            }
            else
            {
                cout << -1 << endl;
            }
        }
        else if (a == 3)
        {
            cout << s.size() << endl;
        }
        else if (a == 4)
        {
            if (!s.empty())
            {
                cout << 0 << endl;
            }
            else
            {
                cout << 1 << endl;
            }
        }
        else
        {
            if (!s.empty())
            {
                cout << s.top() << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }
}