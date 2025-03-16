#include <iostream>
using namespace std;

int countZero(int n)
{
    int cnt = 0;
    for (int i = 5; i <= n; i *= 5)
    {
        cnt += n / i;
    }
    return cnt;
}

int main()
{
    int N;
    cin >> N;

    cout << countZero(N);
}