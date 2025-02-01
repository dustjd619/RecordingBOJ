#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int C;
    cin >> C;

    for (int i = 0; i < C; i++)
    {
        int N;
        cin >> N;

        vector<int> score(N);
        int sum = 0;
        for (int j = 0; j < N; j++)
        {
            cin >> score[j];
            sum += score[j];
        }

        int cnt = 0;
        for (int j = 0; j < N; j++)
        {
            if (score[j] > static_cast<float>(sum) / N)
            {
                cnt++;
            }
        }

        float res = static_cast<float>(cnt) / N * 100;
        cout << fixed;
        cout.precision(3);
        cout << round(res * 1000) / 1000 << '%' << endl;
    }
}