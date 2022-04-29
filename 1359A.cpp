#include<bits/stdc++.h>
using namespace std;

#define ll                  long long
#define rep(i,n)             for (ll i=0;i<n;i++)
#define rep1(i,n)            for(ll i=1;i<=n;i++)
int main()
{

    ios::sync_with_stdio(false);

    int t;
    cin>>t;
    while (t--)
    {
        int n, m, k, a, b;
        cin>>n>>m>>k;
        a=n/k;
        if (m<=a)
        {
            cout<<m<<endl;
        }
        else{
            m-=a;
            cout<<a-((m+k-2)/(k-1))<<endl;
        }
    }
    return 0;
}