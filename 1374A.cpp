#include<iostream>
using namespace std;

int main(){

    int t, ans;
    cin>>t;
    long long int a[t], b[t], c[t];

    for (int i = 0; i < t; i++)
    {
        cin>>a[i]>>b[i]>>c[i];
    }
    for (int i = 0; i < t; i++)
    {
        ans=((c[i]/a[i])*a[i])+b[i];
        if (ans>c[i])
        {
            ans-=a[i];
            cout<<ans<<endl;
        }
        else
            cout<<ans<<endl;
    }
    
    return 0;
}
