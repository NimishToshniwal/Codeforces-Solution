#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fr(i, n) for (ll i = 0; i < n; i++)
#define fr1(i, n) for (ll i = 1; i <= n; i++)
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, rem;
        cin >> n;
        ll a[n], sum = 0;
        fr(i, n)
        {
            cin >> a[i];
            sum += a[i];
        }
        rem = sum % n;
        cout << (n-rem)*rem << endl;
    }

    return 0;
}