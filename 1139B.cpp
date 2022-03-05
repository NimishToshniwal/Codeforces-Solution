#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{
    int n;
    cin >> n;
    ll a[n], temp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n/2; i++)
    {
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }
    ll sum = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < a[i - 1])
        {
            if (a[i] == 0)
            {
                break;
            }
            else
                sum += a[i];
        }
        else
        {
            a[i] = a[i - 1] - 1;
            if (a[i] == 0)
            {
                break;
            }
            sum += a[i];
        }
    }
    cout << sum;
    return 0;
}