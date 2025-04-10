#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;

    long *sum = new long[N + 1];
    sum[0] = 0;

    int a = 0;
    for (int i = 1; i <= N; i++)
    {
        cin >> a;
        sum[i] = a + sum[i - 1];
    }

    int s = 0, e = 0;
    for (int i = 0; i < M; i++)
    {
        cin >> s >> e;
        cout << sum[e] - sum[s - 1] << '\n';
    }
}