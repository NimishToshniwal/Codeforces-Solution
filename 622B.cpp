#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    char a[5];
    rep(i, 5)
    {
        cin >> a[i];
    }
    int hh = 10 * (a[0] - '0') + (a[1] - '0');
    int mm = 10 * (a[3] - '0') + (a[4] - '0');
    int ext;
    cin >> ext;
    int hh1, mm1;
    mm1 = (ext + mm) % 60;
    hh1 = (((ext + mm - mm1) / 60) + hh) % 24;
    cout << hh1 / 10 << hh1 % 10 << ":" << mm1 / 10 << mm1 % 10;
    return 0;
}