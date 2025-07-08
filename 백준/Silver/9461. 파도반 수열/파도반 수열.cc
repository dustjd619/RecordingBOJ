#include <iostream>
#define endl '\n'
using namespace std;

int main()
{
    int T;
    cin >> T;

    long long int P[101] = {0, 1, 1, 1, 2, 2, 3, 4, 5, 7, 9};

    for (int i = 10; i <= 100; i++)
    {
        P[i] = P[i - 1] + P[i - 5];
    }

    while (T--)
    {
        int N;
        cin >> N;

        cout << P[N] << endl;
    }
}