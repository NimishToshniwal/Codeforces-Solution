#include<bits/stdc++.h>
using namespace std;

#define ll                  long long
#define rep(i,n)             for (ll i=0;i<n;i++)
#define rep1(i,n)            for(ll i=1;i<=n;i++)
int main()
{
    int n;
    cin>>n;
    int a[n];
    rep(i, n){
        cin>>a[i];
    }
    bool flag = 0;
    rep(i,n){
        if (a[i]==0)
        {   
            continue;
        }
        else{
            flag = 1;
            break;
        }
    }
    if (flag==0)
    {
        cout<<"EASY";
    }
    else{
        cout<<"HARD";
    }
    return 0;
}