#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    string name;

    cin >> n;
    cin.ignore();

    while (n--)
    {
        int g = 0, b = 0;
        string res;

        getline(cin, name);
        for (char a : name)
        {
            if (a == 'g' || a == 'G')
            {
                g++;
            }
            if (a == 'b' || a == 'B')
            {
                b++;
            }
        }
        if (g > b)
        {
            res = "GOOD";
        }
        else if (g < b)
        {
            res = "A BADDY";
        }
        else
        {
            res = "NEUTRAL";
        }

        cout << name << " " << "is" << " " << res << endl;
    }
}