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
    int a[n];
    int count1 = 0, count2 = 0;
    rep(i, n)
    {
        cin >> a[i];
        if (a[i] > 0)
        {
            count1++;
        }
        else if (a[i] < 0)
        {
            count2++;
        }
        continue;
    }
    if (count1 >= (n + 1) / 2)
    {
        cout << 1;
    }
    else if (count2 >= (n + 1) / 2)
    {
        cout << -1;
    }
    else
    {
        cout << 0;
    }
    return 0;
}