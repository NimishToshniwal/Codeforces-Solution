#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, a, b;
    cin >> n >> a >> b;
    // n -= a;
    // cout << n;
    if (n-a-1>b)
    {
        cout<<b+1;
    }
    else{
        cout<<n-a;
    }
    return 0;
}