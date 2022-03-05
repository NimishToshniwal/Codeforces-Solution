#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    ll d1, d2, d3;
    cin >> d1 >> d2 >> d3;
    cout << min(d1 + d2 + d3, min(2 * (d1 + d2), min(2 * (d2 + d3), 2 * (d1 + d3))));

    return 0;
}