#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int hcf(int a, int b)
{
    return b == 0 ? a : hcf(b, a % b);
}
int main()
{

    ios::sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--)
    {
        int k, c;

        cin >> k;
        c = hcf(k, 100 - k);
        cout << 100 / c << endl;
    }
    return 0;
}