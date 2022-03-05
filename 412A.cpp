#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    if (k > n / 2)
    {
        while (k != n)
        {
            cout << "RIGHT" << endl;
            k++;
        }
        while (k != 0)
        {
            k--;
            cout << "PRINT"
                 << " " << s[k] << endl;
            if (k != 0)
            {
                cout << "LEFT" << endl;
            }
        }
    }
    else
    {
        while (k != 0)
        {
            if (k != 1)
            {
                cout << "LEFT" << endl;
            }
            k--;
        }
        while (k != n)
        {

            cout << "PRINT"
                 << " " << s[k] << endl;
            if (k != n - 1)
            {
                cout << "RIGHT" << endl;
            }
            k++;
        }
    }

    return 0;
}