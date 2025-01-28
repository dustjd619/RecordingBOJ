#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    cin.ignore();

    for (int i = 1; i < N + 1; i++)
    {
        string name;
        getline(cin, name);

        cout << i << ". " << name << endl;
    }
}