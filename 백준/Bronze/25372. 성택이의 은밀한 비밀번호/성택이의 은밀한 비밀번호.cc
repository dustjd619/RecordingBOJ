#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    string S;
    while (N--)
    {
        cin >> S;
        if (S.size() >= 6 && S.size() <= 9)
        {
            cout << "yes" << endl;
        }
        else
            cout << "no" << endl;
    }
}