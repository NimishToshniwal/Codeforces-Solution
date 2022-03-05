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
        int n;
        cin >> n;
        int a[n], sum = 0, count_1 = 0, count_2 = 0;
        rep(i, n)
        {
            cin >> a[i];
            sum += a[i];
            if (a[i] == 1)
            {
                count_1++;
            }
            else
            {
                count_2++;
            }
        }
        sort(a, a + n);
        if (sum % 2 == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            if (count_2 % 2 == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                if (count_1 % 2 == 0 && count_1 != 0)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
    }

    return 0;
}