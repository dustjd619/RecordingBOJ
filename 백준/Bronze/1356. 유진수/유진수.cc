#include <iostream>
#include <string>
using namespace std;

int main()
{
    string N;
    bool a = false;
    cin >> N;

    for (int i = 1; i < N.size(); ++i)
    {
        int left = 1, right = 1;

        for (int j = 0; j < i; ++j)
        {
            left *= (N[j] - '0');
        }

        for (int j = i; j < N.size(); ++j)
        {
            right *= (N[j] - '0');
        }

        if (left == right)
        {
            a = true;
            cout << "YES" << endl;
            break;
        }
    }

    if (!a)
    {
        cout << "NO" << endl;
    }
}