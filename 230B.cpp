#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
bool isPrime(int x)
{
    if (x <= 1)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{

    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    ll a[n];
    rep(i, n)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
        {
            if (a[i] == 4)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            if (a[i] == 1)
            {
                cout << "NO" << endl;
            }

            else if (sqrt(a[i]) == int(sqrt(a[i])))
            {
                if (isPrime(sqrt(a[i])))
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}