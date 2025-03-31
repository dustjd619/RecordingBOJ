#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> ticket(N);
    for (int i = 0; i < N; i++)
    {
        cin >> ticket[i];
    }

    sort(ticket.begin(), ticket.end());

    int H = 1;
    for (int i = 0; i <= N; i++)
    {
        if (H != ticket[i])
        {
            break;
        }
        H++;
    }

    cout << H;
}