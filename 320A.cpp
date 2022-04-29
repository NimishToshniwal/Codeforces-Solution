#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    string s;
    cin >> s;
    bool flag = 1;
    int n;
    n = s.size();
    for (int i = 0; i < n;)
    {
        if (i < n - 2 && s[i] == '1' && s[i + 1] == '4' && s[i + 2] == '4')
        {
            // cout<<"i1 = "<<i<<endl;
            i += 3;
        }
        else if (i < n - 1 && s[i] == '1' && s[i + 1] == '4')
        {
            // cout<<"i2 = "<<i<<endl;
            i += 2;
        }
        else if (s[i] == '1')
        {
            // cout<<"i3 = "<<i<<endl;
            i++;
        }
        else
        {
            flag = 0;
            // cout<<"i0 = "<<i<<endl;
            cout << "NO" << endl;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "YES" << endl;
    }

    return 0;
}