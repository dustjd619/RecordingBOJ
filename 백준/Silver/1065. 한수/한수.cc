#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int cnt = 0;
    for (int i = 1; i <= N; i++)
    {
        if (i == 1000)
        {
            continue;
        }
        else if (i < 100)
        {
            cnt++;
        }
        else if ((i / 10) % 10 * 2 == ((i / 100) + (i % 10)))
        {
            cnt++;
        }
    }
    cout << cnt;
}