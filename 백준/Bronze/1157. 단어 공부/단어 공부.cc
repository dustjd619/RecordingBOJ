#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    string A;
    cin >> A;

    map<char, int> count;

    for (char a : A)
    {
        if (a >= 'a' && a <= 'z')
        {
            a = a - 32;
        }
        if (a >= 'A' && a <= 'Z')
        {
            count[a]++;
        }
    }

    int maxCount = 0;
    char maxChar = 0;
    bool duplicate = false;

    for (auto pair : count)
    {
        if (maxCount < pair.second)
        {
            maxCount = pair.second;
            maxChar = pair.first;
            duplicate = false;
        }
        else if (maxCount == pair.second)
        {
            duplicate = true;
        }
    }

    // if (duplicate)
    // {
    //     cout << '?' << endl;
    // }
    // else
    // {
    //     cout << maxChar << endl;
    // }

    cout << (duplicate ? '?' : maxChar) << endl;
}