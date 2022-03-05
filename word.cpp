#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int countlower=0, countupper=0;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (islower(s[i]))
        {
            countlower++;
        }
        else
            countupper++;
    }
    if (countupper > countlower)
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    else
        transform(s.begin(), s.end(), s.begin(), ::tolower);

    cout << s;
    return 0;
}