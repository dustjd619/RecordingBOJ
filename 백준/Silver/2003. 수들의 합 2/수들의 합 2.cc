#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    vector<int> num(N);
    for (int i = 0; i < N; i++)
    {
        cin >> num[i];
    }

    int cnt = 0, l = 0, r = 0;
    long long sum = 0;

    while (true)
    {
        if (sum >= M)
        {
            sum -= num[l++];
        }
        else if (r == N)
        {
            break;
        }
        else
        {
            sum += num[r++];
        }

        if (sum == M)
            cnt++;
    }

    cout << cnt;
}