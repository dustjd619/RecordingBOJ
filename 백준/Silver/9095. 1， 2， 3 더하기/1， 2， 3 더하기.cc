#include <iostream>
#define endl '\n'
using namespace std;

int main()
{
    int T;
    cin >> T;

    int arr[11];

    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 4;

    for (int i = 4; i <= 11; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3];
    }

    while (T--)
    {
        int n;
        cin >> n;

        cout << arr[n] << endl;
    }
}