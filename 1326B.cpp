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
    ll b[n], a[n], MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    a[0] = b[0];
    MAX=a[0];
    cout << a[0] << " ";
    for (int i = 1; i < n; i++)
    {
        if (a[i-1]>MAX)
        {
            MAX=a[i-1];
        }
        
        a[i] = MAX + b[i];
        cout << a[i] << " ";
    }
    return 0;
}