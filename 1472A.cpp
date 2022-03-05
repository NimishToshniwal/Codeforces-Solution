#include<iostream>
using namespace std;

int main(){
    int t, w, h;
    long long int n;
    cin>>t;
    while (t--)
    {
        long long int count=1;
        cin>>w>>h>>n;
        while (w%2==0)
        {
            count*=2;
            w/=2;
        }
        while (h%2==0)
        {
            count*=2;
            h/=2;
        }
        if (count>=n)
        {
            cout<<"YES"<<endl;
        }
        else    
            cout<<"NO"<<endl;
        
    }
    

    return 0;
}