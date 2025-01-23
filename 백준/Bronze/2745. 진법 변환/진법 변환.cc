#include <iostream>
using namespace std;

int toDec(char c)
{
    if ('0' <= c && c <= '9')
    {
        return c - '0';
    }
    return c - 'A' + 10;
}

int main()
{
    string N;
    int B;
    cin >> N >> B;

    int NtoDec = 0;
    int mul = 1;

    for (int i = N.size() - 1; i >= 0; i--, mul *= B)
    {
        NtoDec += toDec(N[i]) * mul;
    }

    cout << NtoDec;
}