#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, M;
        cin >> N >> M;

        vector<int> S(N);
        vector<int> B(M);

        for (int i = 0; i < N; i++)
        {
            cin >> S[i];
        }

        for (int i = 0; i < M; i++)
        {
            cin >> B[i];
        }

        sort(S.begin(), S.end());
        sort(B.begin(), B.end());

        int i = 0, j = 0;
        while (i < N && j < M)
        {
            if (S[i] < B[j])
            {
                i++;
            }
            else
            {
                j++;
            }
        }

        if (i == N)
        {
            cout << 'B' << endl;
        }
        else if (j == M)
        {
            cout << 'S' << endl;
        }
        else
        {
            cout << 'C' << endl;
        }
    }
}
