#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    long long int a[t];
    for (int i = 0; i < t; i++)
    {
        cin>>a[i];      
    }
    for (int i = 0; i < t; i++)
    {
        if (a[i]%3==0)
        {
            cout<<a[i]/3<<" "<<a[i]/3<<endl;
        }
        else if (a[i]%3==1)
        {
            cout<<(a[i]/3)+1<<" "<<a[i]/3<<endl;
        }
        else
            cout<<a[i]/3<<" "<<(a[i]/3)+1<<endl;
    }
    
    

    return 0;
}