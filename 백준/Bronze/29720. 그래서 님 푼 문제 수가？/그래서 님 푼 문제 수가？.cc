#include <iostream>
using namespace std;

int main()
{
    int N, M, K;
    cin >> N >> M >> K;

    int min = N - M * K;
    int max = min + M - 1;

    if (min < 0)
    {
        min = 0;
    }

    if (max < 0)
    {
        max = 0;
    }

    cout << min << " " << max << endl;
}
