#include<bits/stdc++.h>
using namespace std;

#define ll                  long long
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        ll a = pow(2, 30);
        for (int i = 0; i < 30; i++)
        {
            if ((n)%(a-1)==0)
            {
                cout<<n/(a-1)<<endl;
                break;
            }
            else{
                a/=2;
            }
            continue;
        }
        
    }
    

    return 0;
}