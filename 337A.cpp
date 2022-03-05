#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;
    int a[m], b[m-n+1];
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    sort(a, a + m);
    for (int i = 0; i <= m-n; i++)
    {
        b[i]=a[n+i-1]-a[i];
    }
    sort(b, b+m-n+1);
    cout<<b[0];

    return 0;
}