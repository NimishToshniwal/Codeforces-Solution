#include<bits/stdc++.h>
using namespace std;

#define ll                  long long
#define rep(i,n)             for (ll i=0;i<n;i++)
#define rep1(i,n)            for(ll i=1;i<=n;i++)
int main()
{

    ios::sync_with_stdio(false);

    ll n, k;
    cin>>n>>k;
    ll ans=-1, l=0, r=k-1, m, sum;
    while (l<=r)
    {
        m=(l+r)/2;
        sum=m*(2*k-m-1)/2;
        if (n-1<=sum)
        {
            ans=m;
            r=m-1;
        }else{
            l=m+1;
        }
    }
    cout<<ans;

    return 0;
}