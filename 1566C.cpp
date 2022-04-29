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
        int n;
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;
        ll count = 0;
        for (int i = 0; i < n;)
        {
            if (s1[i] != s2[i])
            {
                count += 2;
                i++;
                // cout << "Count = " << count << endl;
                // cout << "i = " << i << endl;
            }
            else
            {
                if (s1[i] == '1' && s2[i] == '1')
                {
                    if ((s1[i + 1] == '0') && (s2[i + 1] == '0'))
                    {
                        count += 2;
                        i += 2;
                        // cout << "Count = " << count << endl;
                        // cout << "i = " << i << endl;
                    }
                    else
                    {
                        i++;
                        // cout << "Count = " << count << endl;
                        // cout << "i = " << i << endl;
                        continue;
                    }
                }
                else
                {
                    if ((s1[i + 1] == '1') && (s2[i + 1] == '1'))
                    {
                        count += 2;
                        i += 2;
                        // cout << "Count = " << count << endl;
                        // cout << "i = " << i << endl;
                    }
                    else
                    {
                        count++;
                        i++;
                        // cout << "Count = " << count << endl;
                        // cout << "i = " << i << endl;
                    }
                }
            }
        }
        cout << count << endl;
    }

    return 0;
}