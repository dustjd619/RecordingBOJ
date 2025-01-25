#include <iostream>
#include <sstream>
#include <stack>
using namespace std;

int main()
{
    int N;
    cin >> N;
    cin.ignore();

    stack<string> wrd;
    string sentence;
    string word;

    for (int i = 1; i < N + 1; i++)
    {
        getline(cin, sentence);
        stringstream ss(sentence);

        while (ss >> word)
        {
            wrd.push(word);
        }

        cout << "Case #" << i << ":" << " ";
        while (!wrd.empty())
        {
            cout << wrd.top();
            wrd.pop();
            if (!wrd.empty())
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}