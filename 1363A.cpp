#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--)
    {
        int n, x, count1 = 0, count2 = 0, MIN, diff;
        cin >> n >> x;
        int a[n];
        rep(i, n)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
            {
                count2++;
            }
            else
            {
                count1++;
            }
        }
        MIN = min(count2, x - 1);
        diff = x - MIN;
        if (diff % 2 == 0)
        {
            diff += 1;
        }
        if (count1 >= diff && diff <= x)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}