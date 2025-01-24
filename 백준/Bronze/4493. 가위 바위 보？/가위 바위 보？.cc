#include <iostream>
using namespace std;

void RSP(char p1, char p2, int &count1, int &count2)
{
    if ((p1 == 'R' && p2 == 'S') || (p1 == 'S' && p2 == 'P') || (p1 == 'P' && p2 == 'R'))
    {
        count1++;
    }
    else if ((p2 == 'R' && p1 == 'S') || (p2 == 'S' && p1 == 'P') || (p2 == 'P' && p1 == 'R'))
    {
        count2++;
    }
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        int count1 = 0, count2 = 0;
        for (int j = 0; j < n; j++)
        {
            char p1, p2;
            cin >> p1 >> p2;

            RSP(p1, p2, count1, count2);
        }
        if (count1 > count2)
        {
            cout << "Player 1" << endl;
        }
        else if (count1 < count2)
        {
            cout << "Player 2" << endl;
        }
        else
        {
            cout << "TIE" << endl;
        }
    }
}