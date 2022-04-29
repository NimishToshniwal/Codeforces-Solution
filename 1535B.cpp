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
        int n, k;
        cin >> n;
        vector<int> v1, v2, v;
        for (int i = 0; i < n; i++)
        {
            cin >> k;
            if (k % 2 == 0)
            {
                v2.push_back(k);
            }
            else
            {
                v1.push_back(k);
            }
        }
        sort(v1.begin(), v1.end(), greater<int>());
        sort(v2.begin(), v2.end(), greater<int>());
        for (int i = 0; i < v2.size(); i++)
        {
            v.push_back(v2[i]);
        }
        for (int i = 0; i < v1.size(); i++)
        {
            v.push_back(v1[i]);
        }
        int count = 0;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (__gcd(v[i], 2 * v[j]) > 1)
                {
                    count++;
                }
                continue;
            }
        }
        cout << count << endl;
        // rep(i, n){
        //     cout<<v[i]<<" ";
        // }
    }
    return 0;
}