#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int T;
    cin >> T;

    vector<int> perfectNum(T);
    for (int i = 0; i < T; i++)
    {
        cin >> perfectNum[i];
    }

    for (int a : perfectNum)
    {
        int sum = 0;
        for (int i = 1; i < a; i++)
        {
            if (a % i == 0)
            {
                sum += i;
            }
        }

        if (sum == a)
        {
            cout << "Perfect" << "\n";
        }
        else if (sum < a)
        {
            cout << "Deficient" << "\n";
        }
        else
        {
            cout << "Abundant" << "\n";
        }
    }
}