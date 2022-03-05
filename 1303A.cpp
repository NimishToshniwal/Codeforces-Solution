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
        int count = 0, count1 = 0, count2 = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                count1++;
                continue;
            }
            else
            {
                break;
            }
        }
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] == '0')
            {
                count2++;
                continue;
            }
            else
            {
                break;
            }
        }
        // cout<<count1<<" "<<count2<<endl;
        if (count1 + count2 >= s.size())
        {
            cout << 0 << endl;
        }
        else
        {
            for (int i = count1; i < s.size() - count2; i++)
            {
                if (s[i] == '0')
                {
                    count++;
                }
                else
                {
                    continue;
                }
            }
            cout << count << endl;
        }
    }
    return 0;
}