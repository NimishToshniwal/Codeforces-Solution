#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, count = 0;
    cin >> n;
    string a;
    cin >> a;
    rep(i, n - 2)
    {
        if (a[i] == a[i + 1] && a[i + 1] == a[i + 2] && a[i] == 'x')
        {
            count++;
        }
        continue;
    }
    cout << count;
    return 0;
}