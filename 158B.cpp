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
    int a[n], count1 = 0, count2 = 0, count3 = 0, count4 = 0, ans;
    ;
    rep(i, n)
    {
        cin >> a[i];
        if (a[i] == 1)
        {
            count1++;
        }
        else if (a[i] == 2)
        {
            count2++;
        }
        else if (a[i] == 3)
        {
            count3++;
        }
        else
        {
            count4++;
        }
    }
    ans = count4 + count3 + count2 / 2;
    count1 -= count3;
    if (count2 % 2 == 1)
    {
        ans += 1;
        count1 -= 2;
    }
    if (count1 > 0)
    {
        ans += (count1 + 3) / 4;
    }
    cout<<ans;
    return 0;
}