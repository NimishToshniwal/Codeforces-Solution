#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        int count = 0;
        bool flag = 1;
        while (n != 1)
        {
            if (n % 6 == 0)
            {
                n /= 6;
                count++;
            }
            else
            {
                n *= 2;
                count++;
                if (n % 6 == 0)
                {
                    n /= 6;
                    count++;
                }
                else
                {
                    flag = 0;
                    break;
                }
            }
        }
        if (flag == 1)
        {
            cout << count << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}