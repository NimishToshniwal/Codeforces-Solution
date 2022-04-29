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
    int a[n], MAX = 1, count = 1;
    rep(i, n)
    {
        cin >> a[i];
    }
    rep(i, n - 1)
    {
        if (a[i + 1] > a[i])
        {
            count++;
            if (MAX < count)
            {
                MAX = count;
            }
        }
        else
        {
            count = 1;
        }
    }
    cout << MAX;
    return 0;
}