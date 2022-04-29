#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    string s;
    cin >> s;
    int n = s.size();
    vector<int> v1(n, 0), v2(n, 0);
    for (int i = 1; i < n; i++)
    {
        if (s[i - 1] == 'Q')
        {
            v1[i] = 1 + v1[i - 1];
        }
        else
        {
            v1[i] = v1[i - 1];
        }
    }
    for (int i = n - 2; i >= 0; i--)
    {
        if (s[i + 1] == 'Q')
        {
            v2[i] = 1 + v2[i + 1];
        }
        else
        {
            v2[i] = v2[i + 1];
        }
    }
    ll sum = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (s[i] == 'A')
        {
            sum += v1[i] * v2[i];
        }
    }
    cout << sum;
    return 0;
}