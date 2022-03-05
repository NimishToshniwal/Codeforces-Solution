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
        char a[n];
        rep(i, n)
        {
            cin >> a[i];
            if (a[i] == 'U')
            {
                a[i] = 'D';
            }
            else if (a[i] == 'D')
            {
                a[i] = 'U';
            }
            continue;
        }
        rep(i, n)
        {
            cout << a[i];
        }
        cout << endl;
    }

    return 0;
}