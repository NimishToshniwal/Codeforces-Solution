#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, k, i = 1, diff;
    cin >> n >> k;
    diff = 240 - k;
    while ((5 * i * (i + 1)) / 2 <= diff && i <= n)
    {
        i++;
    }
    cout << i - 1;
    return 0;
}