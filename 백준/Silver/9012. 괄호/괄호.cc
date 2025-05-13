#include <iostream>
#include <stack>
#define endl "\n"
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        stack<int> ps;

        string S;
        cin >> S;

        bool flag = true; 
        for (char a : S)
        {
            if (a == '(')
            {
                ps.push(a);
            }
            else
            {
                if (ps.empty())
                {
                    flag = false;
                }
                else
                {
                    ps.pop();
                }
            }
        }

        if (!ps.empty())
        {
            flag = false;
        }

        cout << (flag ? "YES" : "NO") << endl;
    }
}
