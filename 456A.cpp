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
    pair<int, int> a[n];
    rep(i, n)
    {
        cin >> a[i].first >> a[i].second;
    }
    sort(a, a + n);
    rep(i, n - 1)
    {
        if (a[i].first < a[i + 1].first && a[i].second > a[i + 1].second)
        {
            cout << "Happy Alex" << endl;
            return 0;
        }
    }
    cout << "Poor Alex" << endl;
    return 0;
}