#include<iostream>
using namespace std;

int main(){
    int n, S=0, MAX=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i]>MAX)
        {
            MAX=a[i];
        }
        continue;
        
    }
    for (int i = 0; i < n; i++)
    {
        S+=MAX-a[i];
    }
    cout<<S;
    

    return 0;
}