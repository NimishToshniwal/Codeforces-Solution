#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin>>n>>k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        a[i]=5-a[i];
    }
    sort(a, a+n);
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]>=k)
        {
            count++;
        }
        continue;
    }
    cout<<count/3;
    
    return 0;
}