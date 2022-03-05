#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> h(10, 0);

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'L')
        {
            for (int i = 0; i < 10; i++)
            {
                if (h[i] == 0)
                {
                    h[i] = 1;
                    break;
                }
            }
        }
        else if (s[i] == 'R')
        {
            for (int i = 9; i >= 0; i--)
            {
                if (h[i] == 0)
                {
                    h[i] = 1;
                    break;
                }
            }
        }
        else
        {
            h[s[i] - '0'] = 0;
        }
    }
    rep(i, 10)
    {
        cout << h[i];
    }
    return 0;
}