#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    string N;
    vector<char> A;
    cin >> N;

    for (char a : N)
    {
        if (a == '@' || a == '#' || a == '!')
        {
            A.push_back(a);
        }
    }

    vector<char> A1 = {'@', '#', '!'};
    vector<char> A2 = {'!', '#', '@'};
    int res;

    if (A == A1 || A == A2)
    {
        if (N.find('@') > N.find('!'))
        {
            res = N.find('@') - N.find('!') - 1;
        }
        else
        {

            res = N.find('!') - N.find('@') - 1;
        }
        cout << res << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}