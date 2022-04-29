#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, count1 = 1, count2 = 0;
    cin >> n;
    string s[n], s1;
    cin >> s[0];
    for (int i = 1; i < n; i++)
    {
        cin >> s[i];
        if (s[i] == s[0])
        {
            count1++;
        }
        else
        {
            s1 = s[i];
            count2++;
        }
    }
    if (count1 > count2)
    {
        cout << s[0] << endl;
    }
    else
    {
        cout << s1 << endl;
    }
    return 0;
}