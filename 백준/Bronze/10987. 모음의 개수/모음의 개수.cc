#include <iostream>
using namespace std;

int main()
{
    string S;
    cin >> S;

    int cnt = 0;
    for (int i; i < S.size(); i++)
    {
        if (S[i] == 'a' || S[i] == 'i' || S[i] == 'u' || S[i] == 'e' || S[i] == 'o')
        {
            cnt++;
        }
    }

    cout << cnt;
}