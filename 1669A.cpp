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
        int k;
        cin>>k;
        if (k<=1399)
        {
            cout<<"Division 4"<<endl;
        }
        else if (k<=1599)
        {
            cout<<"Division 3"<<endl;
        }
        else if (k<=1899)
        {
            cout<<"Division 2"<<endl;
        }
        else{
            cout<<"Division 1"<<endl;
        }
    }
    

    return 0;
}