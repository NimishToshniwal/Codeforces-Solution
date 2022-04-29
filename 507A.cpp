#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, k, b, sum = 0, count = 0, a[101];
    vector<pair<int, int>> v;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> b;
        v.push_back(make_pair(b, i + 1));
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        sum += v[i].first;
        if (sum <= k)
        {
            count++;
            a[i] = v[i].second;
        }
        else
        {
            break;
        }
    }
    cout << count << endl;
    for (int i = 0; i < count; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}