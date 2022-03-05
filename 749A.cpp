#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    cout<<n/2<<endl;
    if (n%2==0)
    {
        for (int i = 0; i < n/2; i++)
        {
            cout<<2<<" ";
        }
        
    }
    else{
        cout<<3<<" ";
        n-=3;
        for (int i = 0; i < n/2; i++)
        {
            cout<<2<<" ";
        }
    }


    return 0;

}