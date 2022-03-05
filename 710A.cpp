#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    char n1, n2;
    cin >> n1 >> n2;
    if (n1 == 'a' || n2 == '1' || n1 == 'h' || n2 == '8')
    {
        if (n1 == 'a' && n2 == '1')
        {
            cout << "3";
        }
        else if (n2 == '1' && n1 == 'h')
        {
            cout << "3";
        }
        else if (n1 == 'h' && n2 == '8')
        {
            cout << "3";
        }
        else if (n1 == 'a' && n2 == '8')
        {
            cout << "3";
        }
        else
        {
            cout << "5";
        }
    }
    else
    {
        cout << "8";
    }
    return 0;
}