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
    while (n--)
    {
        ll a, b;
        cin >> a >> b;
        int count = 0;
        while (a && b)
        {
            if (a >= b)
            {
                count += a / b;
                a = a % b;
            }
            else if (b >= a)
            {
                count += b / a;
                b = b % a;
            }
        }
        cout << count << endl;
    }
    return 0;
}