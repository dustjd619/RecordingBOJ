#include <iostream>
using namespace std;

int main()
{
    int N;
    string name;

    cin >> N;

    while (N--)
    {
        cin >> name;

        for (int i = 0; i < name.length(); i++)
        {
            if (name[i] == 'S')
            {
                cout << name << '\n';
                break;
            }
        }
    }
}