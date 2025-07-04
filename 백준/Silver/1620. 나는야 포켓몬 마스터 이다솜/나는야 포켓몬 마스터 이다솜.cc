#include <iostream>
#include <unordered_map>
#include <string>
#include <cctype>
#define endl '\n'

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    unordered_map<int, string> pkm;

    int i = 1;
    while (N--)
    {
        string s;
        cin >> s;
        pkm.insert({i, s});
        i++;
    }

    unordered_map<string, int> rvspkm;
    for (const auto &pair : pkm)
    {
        rvspkm[pair.second] = pair.first;
    }

    while (M--)
    {
        string input;
        cin >> input;

        bool isNum = isdigit(input[0]);

        if (isNum)
        {
            int num = stoi(input);
            cout << pkm[num] << endl;
        }
        else
        {
            cout << rvspkm[input] << endl;
        }
    }
}