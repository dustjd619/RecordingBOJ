#include <iostream>
#include <stack>
#define endl '\n'
using namespace std;

int main()
{
    int N;
    cin >> N;
    stack<int> num;

    for (int i = 0; i < N; i++)
    {
        string S;
        int a;

        cin >> S;
        if (S == "push")
        {
            cin >> a;
            num.push(a);
        }
        else if (S == "pop")
        {
            if (num.empty())
            {
                cout << -1 << endl;
            }
            else
            {
                cout << num.top() << endl;
                num.pop();
            }
        }
        else if (S == "size")
        {
            cout << num.size() << endl;
        }
        else if (S == "empty")
        {
            if (num.empty())
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
        else if (S == "top")
        {
            if (num.empty())
            {
                cout << -1 << endl;
            }
            else
            {
                cout << num.top() << endl;
            }
        }
    }
}