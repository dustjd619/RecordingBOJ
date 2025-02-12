#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> score(10);
    for (int i = 0; i < 10; i++)
    {
        cin >> score[i];
    }

    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum += score[i];

        if (sum >= 100)
        {
            if (sum - 100 > 100 - (sum - score[i]))
            {
                cout << sum - score[i];
                break;
            }
            else
            {
                cout << sum;
                break;
            }
        }
    }
    if (sum < 100)
    {
        cout << sum;
    }
}