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
        int count_0 = 0, count_1 = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                count_0++;
            }
            else
            {
                count_1++;
            }
        }
        if (count_0 == count_1)
        {
            if (s.size() <= 2)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << count_0 - 1 << endl;
            }
        }
        else
        {
            cout << min(count_0, count_1) << endl;
        }
    }
    return 0;
}