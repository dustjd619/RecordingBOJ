#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int res = 0;
    string num;
    bool flag = false;
    for (int i = 0; i <= s.size(); i++)
    {
        if (s[i] == '-' || s[i] == '+' || i == s.size())
        {
            if (flag)
            {
                res -= stoi(num);
                num = "";
            }
            else
            {
                res += stoi(num);
                num = "";
            }
        }
        else
        {
            num += s[i];
        }

        if (s[i] == '-')
        {
            flag = true;
        }
    }

    cout << res;
}