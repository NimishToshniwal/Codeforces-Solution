#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int smallestDivisor(int n)
{
    if (n % 2 == 0)
        return 2;
    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return i;
    }
    return n;
}
bool isPrime(int n)
{
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
        int n, k;
        cin >> n >> k;
        if (isPrime(n))
        {
            cout << (2 * n) + (k - 1) * 2 << endl;
        }
        else
        {
            int m = smallestDivisor(n);
            int ans = n;
            if (n % 2 == 1)
            {
                ans += m;
                if (k - 1 > 0)
                {
                    ans += (k - 1) * 2;
                }
                cout << ans << endl;
            }
            else
            {
                cout << n + (2 * k) << endl;
            }
        }
    }
    return 0;
}