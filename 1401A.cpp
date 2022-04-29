#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (n >= k)
        {
            if ((n - k) % 2 == 0)
                cout << 0 << endl;
            else
                cout << 1 << endl;
        }
        else
        {
            cout << k - n << endl;
        }
    }
    return 0;
}
