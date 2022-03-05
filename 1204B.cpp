#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, l, r;
    long long int MIN, MAX;
    cin>>n>>l>>r;
    MIN=pow(2, l)-1+n-l;
    MAX=pow(2, r)-1+(n-r)*(pow(2, r-1));
    cout<<MIN<<" "<<MAX<<endl;
    return 0;
}