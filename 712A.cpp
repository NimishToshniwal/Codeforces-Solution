#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        cout<<a[i+1]+a[i]<<" ";
    }
    cout<<a[n-1];

    return 0;
}