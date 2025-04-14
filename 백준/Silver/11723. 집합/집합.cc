#include <iostream>
#define endl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int M;
    cin >> M;

    unsigned int S = 0;
    for (int i = 0; i < M; i++)
    {
        string cmd;
        cin >> cmd;

        int a;
        if (cmd == "add")
        {
            cin >> a;
            S |= (1 << (a - 1));
        }
        else if (cmd == "remove")
        {
            cin >> a;
            S &= ~(1 << (a - 1));
        }
        else if (cmd == "check")
        {
            cin >> a;
            cout << (S & (1 << (a - 1)) ? 1 : 0) << endl;
        }
        else if (cmd == "toggle") // XOR
        {
            cin >> a;
            S ^= (1 << (a - 1));
        }
        else if (cmd == "all")
        {
            S = (1 << 20) - 1;
        }
        else // empty
        {
            S = 0;
        }
    }
}