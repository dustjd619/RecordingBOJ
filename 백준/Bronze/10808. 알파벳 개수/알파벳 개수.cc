#include <iostream>
using namespace std;

int main()
{
    string S;
    cin >> S;

    int arr[26] = {0};
    for (char a : S)
    {
        arr[a - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        cout << arr[i];

        if (i != 25)
        {
            cout << ' ';
        }
    }
}