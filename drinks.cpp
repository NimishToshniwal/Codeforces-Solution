#include<iostream>
using namespace std;

int main(){
    int n,p;
    float v;
    float sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>p;
        sum+=p;
    }
    v=sum/n;
    cout<<v;

    return 0;
}