#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b, count, i = 0;
        cin >> n >> a >> b;
        count = 0;
        char ar[n];
        while (n--)
        {
            ar[i] = 97 + count;
            cout << ar[i];
            i++;
            count++;
            if (count == b)
            {
                count = 0;
            }
        }
        cout << endl;
    }
    return 0;
}