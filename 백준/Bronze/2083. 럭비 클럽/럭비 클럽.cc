#include <iostream>
using namespace std;

int main()
{
    string name;
    int age;
    int w;
    bool con = true;

    while (con)
    {
        string info;
        cin >> name >> age >> w;

        if (name == "#" && age == 0 && w == 0)
        {
            con = false;
            break;
        }

        if (age > 17 || w >= 80)
        {
            info = "Senior";
        }
        else
        {
            info = "Junior";
        }
        cout << name << " " << info << endl;
    }
}