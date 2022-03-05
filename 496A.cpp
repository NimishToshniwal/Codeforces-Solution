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
    int a[n], d[n - 1], MAX = 0, MIN = 1000;
    cin >> a[0];
    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
        d[i] = a[i] - a[i - 1];
        MAX = max(MAX, d[i]);
    }
    for (int i = 2; i < n; i++)
    {
        MIN = max(min(MIN, d[i] + d[i - 1]), MAX);
    }
    cout << MIN;
    return 0;
}