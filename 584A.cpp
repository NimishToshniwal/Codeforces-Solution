#include<bits/stdc++.h>
using namespace std;

#define ll                  long long
#define rep(i,n)             for (ll i=0;i<n;i++)
#define rep1(i,n)            for(ll i=1;i<=n;i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, t;
    cin>>n>>t;
    if (n==1)
    {
        if (t==10)
        {
            cout<<-1;
        }
        else{
            cout<<t;
        }
        
    }
    else{
        if (t==10)
        {
            cout<<1;
            for (int i = 1; i < n; i++)
            {
                cout<<0;
            }
            
        }
        else{
            cout<<t;
            for (int i = 1; i < n-1; i++)
            {
                cout<<0;
            }
            cout<<t;
        }
    }
    return 0;
}