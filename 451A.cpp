#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fr(i, n) for (ll i = 0; i < n; i++)
#define fr1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    int n, m;
    cin >> n >> m;
    // if (n % 2 == 1 && m % 2 == 1)
    // {
    //     cout << "Akshat";
    // }
    // else
    // {
    //     if (n == 1 || m == 1)
    // {
    //     cout << "Akshat";
    // }
    // else
    // {
    //     cout << "Malvika";
    // }
    // }
    if (min(n, m) % 2 == 1)
    {
        cout << "Akshat";
    }
    else
    {
        cout << "Malvika";
    }

    return 0;
}