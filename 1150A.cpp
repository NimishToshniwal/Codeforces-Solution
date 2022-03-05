#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, r;
    cin>>n>>m>>r;
    int s[n], b[m];
    for (int i = 0; i < n; i++)
    {
        cin>>s[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin>>b[i];
    }
    sort(s, s+n);
    sort(b, b+m);
    int sum1;
    sum1=((r/s[0])*(b[m-1])+(r%s[0]));
    if (sum1>r)
    {
        cout<<sum1;
    }
    else{
        cout<<r;
    }
    


    return 0;

}