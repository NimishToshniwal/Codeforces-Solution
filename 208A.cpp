#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s, s1 = " ";
    cin >> s;
    for (int i = 0; i < s.length();)
    {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            if (s1.back() == ' ')
            {
                i += 3;
                continue;
            }
            else if ((i == 0) || (i == s.length() - 3))
            {
                i += 3;
            }
            else
            {
                s1 += " ";
            }
        }
        else
        {
            s1.push_back(s[i]);
            i++;
        }
        continue;
    }
    s1.erase(0, 1);
    cout << s1;

    return 0;
}