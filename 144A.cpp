#include<bits/stdc++.h>
using namespace std;

#define ll                  long long
#define rep(i,n)             for (ll i=0;i<n;i++)
#define rep1(i,n)            for(ll i=1;i<=n;i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, MAX=0, MAXi, MIN=INT_MAX, MINi;
    cin>>n;
    int a[n];
    rep(i, n){
        cin>>a[i];
        if (a[i]>MAX)
        {
            MAX=a[i];
            MAXi=i;
        }
        if (a[i]<=MIN)
        {
            MIN=a[i];
            MINi=i;
        }
    }
    if (MINi<MAXi)
    {
        cout<<MAXi-0+n-MINi-2;
    }
    else{
        cout<<MAXi-0+n-MINi-1;
    }
    return 0;
}