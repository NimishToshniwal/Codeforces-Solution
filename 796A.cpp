#include<bits/stdc++.h>
using namespace std;

#define ll                  long long
#define rep(i,n)             for (ll i=0;i<n;i++)
#define rep1(i,n)            for(ll i=1;i<=n;i++)
int main()
{
    int n, m, k, MIN=INT_MAX;
    cin>>n>>m>>k;
    int a[n];
    rep(i, n){
        cin>>a[i];
    }
    rep(i, n){
        if (a[i]<=k&&a[i]!=0)
        {
            if (abs(i+1-m)<MIN)
            {
                MIN=abs(i+1-m);
            }
            continue;
        }
        continue;
    }
    cout<<MIN*10;
    return 0;
}