#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int LCM(ll num1, ll num2)
{
    ll mp;
    if (num1 > num2)
    {
        mp = num1;
    }
    else
    {
        mp = num2;
    }
    while (1)
    {
        if ((mp % num1 == 0) && (mp % num2 == 0))
        {
            break;
        }
        else
        {
            mp++;
        }
    }
    return mp;
}
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}
int main()
{

    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--)
    {
        // ll n, MIN = INT_MAX, MINi;
        // cin >> n;
        // if (n % 2 == 0)
        // {
        //     cout << n / 2 << " " << n / 2 << endl;
        // }
        // else
        // {
        //     if (isPrime(n))
        //     {
        //         cout << 1 << " " << n - 1 << endl;
        //     }
        //     else
        //     {
        //         for (int i = 1; i <= (n / 2); i++)
        //         {
        //             if (LCM(i, n - i) < MIN)
        //             {
        //                 MIN = LCM(i, n - i);
        //                 MINi = i;
        //             }
        //             continue;
        //         }
        //         cout << n - MINi << " " << MINi << endl;
        //     }
        // }
        ll n;
        cin >> n;
        int flag = 1;
        for (ll i = 2; i <= n / i; i++)
        {
            if (n % i == 0)
            {
                cout << n / i << " " << n - n / i << endl;
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            cout << 1 << " " << n - 1 << endl;
    }

    return 0;
}