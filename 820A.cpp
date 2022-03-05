#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int c, v0, v1, a, l, count = 0;
    cin >> c >> v0 >> v1 >> a >> l;
    int v2 = v0, c1 = v0;
    // do
    // {
    //     c -= v0;
    //     if ((v0 + ((count + 1) * a) ) < v1)
    //     {
    //         v0 = v0 + ((count + 1) * a) - l;
    //     }
    //     else
    //     {
    //         v0 = v1 - l;
    //     }

    //     count++;
    //     cout<<c<<" "<<v0<<endl;
    // } while (c > 0 && v0 <= v1);
    while (c1 < c)
    {
        v2 = min(v1, v2 + a);
        c1 += v2 - l;
        count++;
    }

    cout << count + 1;

    return 0;
}