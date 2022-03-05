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
        int n;
        cin >> n;
        int mod = n % 7;
        if (n % 10 >= mod)
        {
            cout << n - mod << endl;
        }
        else
        {
            cout << n + 7 - mod << endl;
        }
    }
    return 0;
}