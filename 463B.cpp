#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, m, k;
    cin >> n;
    m = INT_MIN;
    while (n--)
    {

        cin >> k;
        if (k > m)
        {
            m = k;
        }
    }
    cout << m;
    return 0;
}