#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int k;
    cin >> k;
    int a[12];
    rep(i, 12)
    {
        cin >> a[i];
    }
    int sum = 0, count = 0;
    sort(a, a + 12, greater<int>());
    for (int i = 0; i < 12; i++)
    {
        if (sum < k)
        {
            sum += a[i];
            count++;
        }
        else
        {
            break;
        }
    }
    if (sum >= k)
    {
        cout << count;
    }
    else
    {
        cout << -1;
    }
    return 0;
}