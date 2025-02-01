#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int res = N, cycle = 0;
    do
    {
        int sum = (N / 10) + (N % 10);
        N = (N % 10) * 10 + sum % 10;
        cycle++;
    } while (N != res);

    cout << cycle;
}