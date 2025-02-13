#include <iostream>
using namespace std;

int main()
{
    string name;
    int N, L1 = 0, O1 = 0, V1 = 0, E1 = 0;
    cin >> name >> N;
    for (char a : name)
    {
        if (a == 'L')
            L1++;
        else if (a == 'O')
            O1++;
        else if (a == 'V')
            V1++;
        else if (a == 'E')
            E1++;
        else
            continue;
    }

    string tname, resN;
    int p, resP = -1;
    while (N--)
    {
        int L = L1, O = O1, V = V1, E = E1;
        cin >> tname;
        for (char a : tname)
        {
            if (a == 'L')
                L++;
            else if (a == 'O')
                O++;
            else if (a == 'V')
                V++;
            else if (a == 'E')
                E++;
            else
                continue;
        }

        p = ((L + O) * (L + V) * (L + E) * (O + V) * (O + E) * (V + E)) % 100;

        if (p > resP || (p == resP && tname < resN))
        {
            resP = p;
            resN = tname;
        }
    }

    cout << resN;
}