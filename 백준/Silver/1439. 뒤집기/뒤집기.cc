#include <iostream>
#define endl '\n'
using namespace std;

int main()
{
    string S;
    cin >> S;

    int cnt = 0;
    char flag = S[0];
    for (int i = 1; i < S.size(); i++)
    {
        if (S[i] != flag)
        {
            cnt++;
            flag = S[i];
        }
    }

    if (cnt <= 1)
    {
        cout << cnt;
    }
    else
    {
        if (cnt % 2 == 0)
        {
            cout << cnt / 2;
        }
        else
        {
            cout << cnt / 2 + 1;
        }
    }
}