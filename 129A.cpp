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
    int a[n], sum = 0, count_even = 0, count_odd = 0;
    rep(i, n)
    {
        cin >> a[i];
        sum += a[i];
        if (a[i] % 2 == 0)
        {
            count_even++;
        }
        else
        {
            count_odd++;
        }
    }
    if (sum % 2 == 0)
    {
        cout << count_even;
    }
    else
    {
        cout << count_odd;
    }
    return 0;
}