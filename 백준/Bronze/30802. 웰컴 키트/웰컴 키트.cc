#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> size(6);
    for (int i = 0; i < 6; i++)
    {
        cin >> size[i];
    }

    int T, P;
    cin >> T >> P;

    int shirt = 0;
    for (int a : size)
    {
        if (a % T != 0)
        {
            shirt += a / T + 1;
        }
        else
        {
            shirt += a / T;
        }
    }

    cout << shirt << endl;
    cout << N / P << ' ' << N % P;
}