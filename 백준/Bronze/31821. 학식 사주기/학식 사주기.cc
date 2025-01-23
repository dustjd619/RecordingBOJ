#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> price(N);
    for (int i = 0; i < N; i++)
    {
        cin >> price[i];
    }

    int M;
    cin >> M;

    int sum = 0;
    for (int i = 0; i < M; i++)
    {
        int c;
        cin >> c;
        sum += price[c - 1];
    }

    cout << sum;
}