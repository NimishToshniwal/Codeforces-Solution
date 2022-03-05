#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    int a[n][3];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
    bool flag = 1;
    for (int i = 0; i < 3; i++)
    { 
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += a[j][i];
        }
        if (sum == 0)
        {
            continue;
        }
        else
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}