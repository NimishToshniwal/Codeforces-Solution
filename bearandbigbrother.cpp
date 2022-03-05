#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int a, b;
    int n=0;
    
    cin>>a>>b;
    while (a*(pow(3, n))<=b*(pow(2, n)))
    {
        n++;
    }
    cout<<n;
    return 0;
}