#include <iostream>
#include <string>
#define endl "\n"
using namespace std;

int main()
{
    int N, M;
    string str;

    while (cin >> N >> M)
    {
        int cnt = 0;
        for (int i = N; i <= M; i++)
        {
            bool same = false;
            str = to_string(i);
            for (int j = 0; j < str.size(); j++)
            {
                for (int k = j + 1; k < str.size(); k++)
                {
                    if (str[j] == str[k])
                    {
                        same = true;
                        break;
                    }
                }
            }
            if (same == false)
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}