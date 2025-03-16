#include <iostream>
using namespace std;

class Person
{
public:
    int w;
    int h;
    int rank = 1;
};

int main()
{
    int N;
    cin >> N;

    Person p[N];
    for (int i = 0; i < N; i++)
    {
        cin >> p[i].w >> p[i].h;
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (p[i].w < p[j].w && p[i].h < p[j].h)
            {
                p[i].rank++;
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        cout << p[i].rank << ' ';
    }
}