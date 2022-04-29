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
        int a[n];
        bool fo = 0, fe = 0;
        rep(i, n)
        {
            cin >> a[i];
            if (a[i] % 2 == 1)
            {
                fo = 1;
            }
            else
            {
                fe = 1;
            }
        }
        if (n % 2 == 0)
        {
            if (!fo)
            {
                cout << "NO" << endl;
            }
            else
            {
                if (!fe)
                {
                    cout << "NO" << endl;
                }
                else
                {
                    cout << "YES" << endl;
                }
            }
        }
        else
        {
            // cout<<"fo = "<<fo<<endl;
            if (fo)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}