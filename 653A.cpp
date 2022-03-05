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
    vector<int> v(n);
    rep(i, n)
    {
        cin >> v[i];
    }
    set<int> s(v.begin(), v.end());
    v.assign(s.begin(), s.end());
    bool flag = 0;
    for (int i = 1; i < v.size() - 1; i++)
    {
        if ((v[i] - v[i - 1] == 1) && (v[i + 1] - v[i] == 1))
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
    return 0;
}