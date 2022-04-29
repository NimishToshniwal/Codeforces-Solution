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
    while (n--)
    {
        ll c, sum, a, b, d;
        cin >> c >> sum;
        a = sum / c;
        b = c - sum % c;
        cout << (a * a * b) + (a + 1) * (a + 1) * (c - b) << endl;
    }

    return 0;
}