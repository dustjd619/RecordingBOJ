#include <iostream>
#define endl '\n'
using namespace std;

int main()
{
    int N;
    cin >> N;

    string seat;
    cin >> seat;

    int cnt = 0;
    for (int i = 0; i < seat.size() - 1; i++)
    {
        if (seat.substr(i, 2) == "LL")
        {
            cnt++;
            i++;
        }
    }

    if (cnt <= 1)
    {
        cout << seat.size();
    }
    else
    {
        cout << seat.size() - cnt + 1;
    }
}