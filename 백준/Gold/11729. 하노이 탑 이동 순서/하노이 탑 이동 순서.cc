#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

void hanoi(int n, int from = 1, int by = 2, int to = 3)
{
    if (n == 1)
    {
        cout << from << ' ' << to << "\n";
        return;
    }
    else if (n == 0)
    {
        return;
    }

    hanoi(n - 1, from, to, by);
    cout << from << ' ' << to << "\n";

    hanoi(n - 1, by, from, to);
}

int main()
{
    int N;
    cin >> N;

    string a = to_string(pow(2, N));

    int x = a.find('.');
    a = a.substr(0, x);
    a[a.length() - 1] -= 1;

    cout << a << "\n";

    if (N <= 20)
    {
        hanoi(N);
    }
}