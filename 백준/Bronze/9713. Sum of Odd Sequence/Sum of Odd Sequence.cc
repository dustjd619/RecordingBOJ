#include <iostream>
#define endl "\n"
using namespace std;

int main()
{
    int N;
    cin >> N;

    while (N--)
    {
        int a, sum = 0;
        cin >> a;

        for (int i = 1; i < a + 1; i++)
        {
            if (i % 2 != 0)
                sum += i;
            else
                continue;
        }
        cout << sum << endl;
    }
}