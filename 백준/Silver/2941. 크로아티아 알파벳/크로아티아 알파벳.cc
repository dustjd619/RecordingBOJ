#include <iostream>
using namespace std;

int main()
{
    string A;
    cin >> A;

    int cnt = 0;

    for (int i = 0; i < A.length(); i++)
    {
        cnt++;

        if (A[i] == 'c')
        {
            if (A[i + 1] == '=' || A[i + 1] == '-')
            {
                i++;
            }
        }
        else if (A[i] == 'd')
        {
            if (A[i + 1] == 'z' && A[i + 2] == '=')
            {
                i = i + 2;
            }
            else if (A[i + 1] == '-')
            {
                i++;
            }
        }
        else if (A[i] == 'l' && A[i + 1] == 'j')
        {
            i++;
        }
        else if (A[i] == 'n' && A[i + 1] == 'j')
        {
            i++;
        }
        else if (A[i] == 's' && A[i + 1] == '=')
        {
            i++;
        }
        else if (A[i] == 'z' && A[i + 1] == '=')
        {
            i++;
        }
    }

    cout << cnt;
}