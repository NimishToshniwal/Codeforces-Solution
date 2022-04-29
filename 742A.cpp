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
    if (n == 0)
    {
        cout << 1;
    }
    else
    {
        if (n % 4 == 0)
        {
            cout << 6;
        }
        else if ((n + 1) % 4 == 0)
        {
            cout << 2;
        }
        else if ((n + 2) % 4 == 0)
        {
            cout << 4;
        }
        else
        {
            cout << 8;
        }
    }
    return 0;
}