#include <iostream>
using namespace std;

int main()
{
    char N;
    cin >> N;

    if (N == 'M')
        cout << "MatKor";
    else if (N == 'W')
        cout << "WiCys";
    else if (N == 'C')
        cout << "CyKor";
    else if (N == 'A')
        cout << "AlKor";
    else
        cout << "$clear";
}