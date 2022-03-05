#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    ll n, a;
    cin >> n;
    a = 1000000000;
    while (a > n)
    {
        a /= 10;
    }
    cout << a - (n % a);

    return 0;
}