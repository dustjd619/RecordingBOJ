#include <iostream>
#include <unordered_map>
#define endl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    unordered_map<string, string> pwd;
    while (N--)
    {
        string a, b;
        cin >> a >> b;
        pwd.insert({a, b});
    }

    while (M--)
    {
        string input;
        cin >> input;

        cout << pwd[input] << endl;
    }
}