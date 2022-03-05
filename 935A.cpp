#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, count = 0;
    cin >> n;
    for (int i = 2; i < n + 1; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
        continue;
    }
    cout << count;
    return 0;
}