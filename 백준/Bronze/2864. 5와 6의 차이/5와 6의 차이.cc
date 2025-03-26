#include <iostream>
#define endl "\n"
using namespace std;

int to_int(string s)
{
    int res = 0;
    for (char c : s)
    {
        res = res * 10 + (c - '0');
    }
    return res;
}

int main()
{
    /*5->5,6
    6-> 6,5*/
    string A, B;
    cin >> A >> B;

    int sizeA = A.size();
    int sizeB = B.size();

    /*최소합*/
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] == '6')
        {
            A[i] = '5';
        }
    }
    for (int i = 0; i < B.size(); i++)
    {
        if (B[i] == '6')
        {
            B[i] = '5';
        }
    }

    cout << to_int(A) + to_int(B) << ' ';

    /*최대합*/
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] == '5')
        {
            A[i] = '6';
        }
    }
    for (int i = 0; i < B.size(); i++)
    {
        if (B[i] == '5')
        {
            B[i] = '6';
        }
    }

    cout << to_int(A) + to_int(B);
}