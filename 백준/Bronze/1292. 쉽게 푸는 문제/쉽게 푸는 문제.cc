#include <iostream>
using namespace std;

int sum(int k)
{
    int cnt = 0, i = 1;
    while (k >= cnt + i)
    {
        cnt += i;
        i++;
    }

    int sum = 0;
    for (int j = 1; j < i; j++)
    {
        sum += j * j;
    }

    sum += (k - cnt) * i;

    return sum;
}

int main()
{
    int A, B;
    cin >> A >> B;

    int res = sum(B) - sum(A - 1);

    cout << res;
}