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
    int a[n], count1 = 0, count2 = 0;
    rep(i, n)
    {
        cin >> a[i];
        if (a[i] == 1)
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
    if (count2 >= count1)
    {
        cout << count1;
    }
    else
    {
        cout << count2 + (count1 - count2) / 3;
    }
    return 0;
}