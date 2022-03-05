#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    bool flag = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 33 && s[i] <= 126)
        {
            if ((s[i] == '9') || (s[i] == 'H') || (s[i] == 'Q') )
            {
                cout << "YES";
                flag = 1;
                break;
            }
        }
    }
    if (flag == 0)
    {
        cout << "NO";
    }

    return 0;
}