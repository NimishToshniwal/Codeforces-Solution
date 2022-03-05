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
    ll a[n], a1[n];
    rep(i, n)
    {
        cin >> a[i];
        a1[i] = a[i];
    }
    sort(a, a + n);
    if (a[0] == a[1])
    {
        cout << "Still Rozdil";
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (a1[i] == a[0])
            {
                cout << i + 1;
                break;
            }
            continue;
        }
    }
    return 0;
}