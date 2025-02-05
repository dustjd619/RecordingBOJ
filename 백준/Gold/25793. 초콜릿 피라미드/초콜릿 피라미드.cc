#include <iostream>
#define endl '\n'
using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        ll R, C;
        cin >> R >> C;

        ll W, D;
        ll n = min(R, C);

        W = n * (n + 1) * (2 * n + 1) / 3 - n * (n + 1) * (R + C + 1) + n * (2 * R * C + R + C + 1);
        D = W - n;

        cout << W << ' ' << D << endl;
    }
}