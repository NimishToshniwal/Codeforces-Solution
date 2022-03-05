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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        bool flag = 1;
        for (int i = 0; i <= n / 2; i++)
        {
            if (s[i] == s[n - i - 1])
            {
                continue;
            }
            else
            {
                flag = 0;
                break;
            }
        }
        // cout<<"flag = "<<flag<<endl;
        if (flag == 1)
        {

            cout << 1 << endl;
        }
        else
        {
            if (k == 0)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 2 << endl;
            }
        }
    }
    return 0;
}