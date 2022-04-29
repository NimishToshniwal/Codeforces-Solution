#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;
    vector<int> a(n), v(k, 0);
    rep(i, n)
    {
        cin >> a[i];
        v[a[i] - 1]++;
    }
    int count = 0, count1 = 0;
    for (int i = 0; i < k; i++)
    {
        if (v[i] % 2 == 0)
        {
            count += v[i] / 2;
            v[i] = 0;
        }
        else
        {
            count += v[i] / 2;
            v[i] = 1;
            count1++;
        }
    }
    cout << 2 * count + (count1 + 1) / 2 << endl;
    return 0;
}