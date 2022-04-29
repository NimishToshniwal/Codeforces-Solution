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
        int x, count = 9;
        cin >> x;
        vector<int> v;
        if (x > 45)
        {
            cout << -1 << endl;
        }
        else
        {
            while (x > count)
            {
                // cout << "count = " << count << endl;
                v.push_back(count);
                x -= count;
                count--;
                // cout << "x = " << x << endl;
            }
            v.push_back(x);
            sort(v.begin(), v.end());
            for (int i = 0; i < v.size(); i++)
            {
                cout << v[i];
            }
            cout << endl;
        }
    }

    return 0;
}