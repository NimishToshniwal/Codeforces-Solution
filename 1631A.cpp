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
        int n;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int max1 = 0, max2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] < b[i])
            {
                swap(a[i], b[i]);
            }
            if (a[i] > max1)
            {
                max1 = a[i];
            }
            if (b[i] > max2)
            {
                max2 = b[i];
            }
            continue;
        }
        cout << max1 * max2 << endl;
    }
    return 0;
}