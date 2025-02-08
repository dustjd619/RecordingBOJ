#include <iostream>
using namespace std;

int main()
{
    string S;
    cin >> S;

    int cnt = 1;
    for (char a : S)
    {
        if (a == ',')
        {
            cnt++;
        }
    }

    cout << cnt;
}