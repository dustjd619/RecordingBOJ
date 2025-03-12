#include <iostream>
using namespace std;

int main()
{
    int L;
    cin >> L;

    string s;
    cin >> s;

    int k = 1;
    long long sum = 0;
    for (char c : s)
    {
        sum += (c - 'a' + 1) * k;
        k *= 31;
    }

    cout << sum;
}