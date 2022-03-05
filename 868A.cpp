#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    string pw, s;
    cin >> pw;
    int n;
    cin >> n;
    // char a[2*n];
    // rep(i, 2*n){
    //     cin>>a[i];
    // }
    bool flag = 0, flag1 = 0, flag2 = 0;
    while (n--)
    {
        cin >> s;
        if (pw[0] == s[1])
        {
            flag1 = 1;
        }
        if (pw[1] == s[0])
        {
            flag2 = 1;
        }
        if (pw == s)
        {
            flag = 1;
        }
    }

    // for (int i = 0; i < 2*n-1; i+=2)
    // {
    //     if (a[i]==pw[1])
    //     {
    //         flag1=1;
    //         break;
    //     }
    //     continue;
    // }
    // for (int i = 1; i < 2*n; i+=2)
    // {
    //     if (a[i]==pw[0])
    //     {
    //         flag2=1;
    //         break;
    //     }
    //     continue;
    // }
    if ((flag1 && flag2) || flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}