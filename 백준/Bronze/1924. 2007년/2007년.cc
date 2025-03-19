#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    int year[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int day = y;
    for (int i = 1; i < x; i++)
    {
        day += year[i - 1];
    }

    day %= 7;
    if (day == 1)
        cout << "MON";
    else if (day == 2)
        cout << "TUE";
    else if (day == 3)
        cout << "WED";
    else if (day == 4)
        cout << "THU";
    else if (day == 5)
        cout << "FRI";
    else if (day == 6)
        cout << "SAT";
    else
        cout << "SUN";
}