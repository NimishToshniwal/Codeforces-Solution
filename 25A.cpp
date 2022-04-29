#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, count1 = 0, count2 = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
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
    if (count1 > count2)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
            {
                cout << i + 1;
                break;
            }
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 1)
            {
                cout << i + 1;
                break;
            }
        }
    }

    return 0;
}