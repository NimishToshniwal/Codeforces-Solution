#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    ll n;
    cin >> n;
    int a[n], count1 = 0, count2 = 0, count3 = 0;
    rep(i, n)
    {
        cin >> a[i];
        if (a[i] == 1)
        {
            count1++;
        }
        else if (a[i] == 2)
        {
            count2++;
        }
        else
        {
            count3++;
        }
    }
    cout << n - max(count1, max(count2, count3));
    return 0;
}