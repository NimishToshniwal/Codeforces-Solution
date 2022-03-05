#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{
    float r, g, b, MAX = 0;
    cin >> r >> g >> b;
    if (ceil(r / 2) >= ceil(g / 2) && ceil(r / 2) >= ceil(b / 2))
    {
        MAX = r;
    }
    if (ceil(g / 2) >= ceil(r / 2) && ceil(g / 2) >= ceil(b / 2))
    {
        MAX = g;
    }
    if (ceil(b / 2) >= ceil(r / 2) && ceil(b / 2) >= ceil(g / 2))
    {
        MAX = b;
    }
    if (MAX == b)
    {
        if (int(MAX) % 2 == 1)
        {
            cout << 29 + int(b / 2) * 3 + 3;
        }
        else
            cout << 29 + int(b / 2) * 3;
    }
    else if (MAX == g)
    {
        if (int(MAX) % 2 == 1)
        {
            cout << 29 + int(g / 2) * 3 + 2;
        }
        else
            cout << 29 + int(g / 2) * 3 - 1;
    }
    else
    {
        if (int(MAX) % 2 == 1)
        {
            cout << 29 + int(r / 2) * 3 + 1;
        }
        else
            cout << 29 + int(r / 2) * 3 - 2;
    }
    return 0;
}