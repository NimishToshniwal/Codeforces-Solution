#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);
    int n, k;
    cin >> n;
    vector<int> a(n+1);
    for (int i = 1; i <= n; i++)
    {
        cin >> k;
        a[k]=i;
    }   
    for (int i = 1; i < n+1; i++)
    {
        cout<<a[i]<<" ";
    } 
    return 0;
}
