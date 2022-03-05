#include<iostream>
using namespace std;

int main(){
    int a, b, c, d, e, f, g;
    cin>>a>>b>>c;
    d=a+b*c;
    e=a*(b+c);
    f=a*b*c;
    g=(a+b)*c;
    cout<<max(g, max(f, max(d, e)));
    return 0;
}