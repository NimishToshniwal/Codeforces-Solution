#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int a[n], b, c, d, e, MIN, MAX;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<a[1]-a[0]<<" "<<a[n-1]-a[0]<<endl;
    for (int i = 1; i < n-1; i++)
    {
        b=a[i]-a[i-1];
        c=a[i+1]-a[i];
        d=a[n-1]-a[i];
        e=a[i]-a[0];
        MIN=min(b, min(c, min(d, e)));
        MAX=max(b, max(c, max(d, e)));
        cout<<MIN<<" "<<MAX<<endl;
        
    }
    cout<<a[n-1]-a[n-2]<<" "<<a[n-1]-a[0]<<endl;
    

    return 0;
}