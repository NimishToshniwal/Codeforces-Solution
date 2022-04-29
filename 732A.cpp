#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int k, r;
    cin >> k >> r;
    int count = 0;
    for (int i = 1; i < 10; i++)
    {
        count++;
        if (k * i % 10 == r)
        {
            break;
        }
        else if (k * i % 10 == 0)
        {
            break;
        }

        continue;
        ;
    }
    cout << count;

    return 0;
}