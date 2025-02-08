#include <iostream>
using namespace std;

int max(int x)
{
    int a = 0, b;

    for (int i = 0; i < x; i++)
    {
        cin >> b;
        if (a <= b)
            a = b;
        else
            continue;
    }
    return a;
}

int main()
{
    int N, M;
    cin >> N >> M;

    cout << max(N) + max(M);
}