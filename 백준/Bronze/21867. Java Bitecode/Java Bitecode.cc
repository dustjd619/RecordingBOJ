#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    string S;
    cin >> S;

    string res;
    for (char a : S)
    {
        if (a != 'J' && a != 'A' && a != 'V')
        {
            res += a;
        }
    }

    if (res.size() == 0)
    {
        cout << "nojava";
    }
    else
    {
        cout << res;
    }
}
