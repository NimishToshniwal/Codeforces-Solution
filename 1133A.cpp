#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int a, b, c, d, f, g, h;
    char e;
    cin >> a >> e >> b >> c >> e >> d;
    f = ((c - a) * 60 + d - b) / 2;
    g = f / 60;
    h = f % 60;
    // cout<<f<<" "<<g<<" "<<h<<endl;
    if (h + b >= 60)
    {
        a = a+g + (h + b) / 60;
        b = (b + h) % 60;
    }
    else
    {
        a += g;
        b += h;
    }
    if (a < 10)
    {
        if (b < 10)
        {
            cout << 0 << a << ":" << 0 << b;
        }
        else
        {
            cout << 0 << a << ":" << b;
        }
    }
    else
    {
        if (b < 10)
        {
            cout << a << ":" << 0 << b;
        }
        else
        {
            cout << a << ":" << b;
        }
    }
    return 0;
}