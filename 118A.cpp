#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    string s1, s2;
    cin >> s1;
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] == 'A' || s1[i] == 'a' || s1[i] == 'E' || s1[i] == 'e' || s1[i] == 'I' || s1[i] == 'i' || s1[i] == 'O' || s1[i] == 'o' || s1[i] == 'U' || s1[i] == 'u' || s1[i] == 'Y' || s1[i] == 'y')
        {
            continue;
        }
        else
        {
            s2.push_back('.');
            if (s1[i] < 91)
            {
                s1[i] += 32;
            }
            s2.push_back(s1[i]);
        }
    }
    cout << s2;
    return 0;
}