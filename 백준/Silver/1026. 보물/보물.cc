#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    vector<int> B(N);
    for (int i = 0; i < N; i++)
    {
        cin >> B[i];
    }

    sort(A.rbegin(), A.rend());
    sort(B.begin(), B.end());

    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += A[i] * B[i];
    }

    cout << sum;
}