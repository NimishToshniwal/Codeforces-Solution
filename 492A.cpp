#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{
    ll n, sum = 0, count = 0, i = 1;
    cin >> n;
    while (sum <= n)
    {
        sum += i * (i + 1) / 2;
        i++;
        count++;
    }
    cout << count - 1;

    return 0;
}