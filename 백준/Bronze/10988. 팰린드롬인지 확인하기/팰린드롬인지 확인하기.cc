#include <iostream>
#include <string>
using namespace std;

int main()
{
    string A;
    cin >> A;

    int start = 0, end = A.length() - 1;
    while (start < end)
    {
        if (A[start] != A[end])
        {
            cout << 0;
            return 0;
        }
        start++;
        end--;
    }

    cout << 1;
}