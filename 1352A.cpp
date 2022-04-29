#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s == "10000")
        {
            cout << 1 << endl
                 << 10000 << endl;
        }
        else
        {
            int a = pow(10, (s.size() - 1)), count = 0;
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] != '0')
                {
                    count++;
                }
            }
            cout << count << endl;
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] != '0')
                {
                    cout << (s[i] - '0') * a << " ";
                }
                a /= 10;
            }
            cout << endl;
        }
    }

    return 0;
}