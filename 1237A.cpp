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
    int a[n];
    rep(i, n)
    {
        cin >> a[i];
    }
    bool f = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            cout << a[i] / 2 << endl;
        }
        else
        {
            float b = (double)a[i] / 2;
            if (!f)
            {
                cout << (int)ceil(b) << endl;
                f = 1;
            }
            else
            {
                cout << (int)floor(b) << endl;
                f = 0;
            }
        }
    }
    return 0;
}