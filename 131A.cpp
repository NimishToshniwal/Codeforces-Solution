#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    bool flag = 1;
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] < 91)
        {
            continue;
        }
        else
        {
            flag = 0;
            break;
        }
    }
    if (flag == 0)
    {
        cout << s;
    }
    else
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] < 91)
            {
                s[i] += 32;
            }
            else
            {
                s[i] -= 32;
            }
        }
        cout << s;
    }

    return 0;
}