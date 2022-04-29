#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
bool findPair(ll arr[], ll n, ll k)
{
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++) {
        mpp[arr[i]]++;
    }
    for (int i = 0; i < n; i++) {
        if (mpp.find(k + arr[i]) != mpp.end()) {
            // cout << "Pair Found: (" << arr[i] << ", "
            //      << n + arr[i] << ")";
            return true;
        }
    }
    // cout << "No Pair found";
    return false;
}
int main()
{

    ios::sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--)
    {
        ll k, n;
        cin >> n >> k;
        ll a[n];
        rep(i, n)
        {
            cin >> a[i];
        }
        // bool flag = 0;
        // for (int i = 0; i < n - 1; i++)
        // {
        //     for (int j = i+1; j < n; j++)
        //     {
        //         if (abs(a[i] - a[j]) == k)
        //         {
        //             flag = 1;
        //             break;
        //         }
        //     }
        // }
        // if (flag == 1)
        // {
        //     cout << "YES" << endl;
        // }
        // else
        // {
        //     cout << "NO" << endl;
        // }
        if (findPair(a, n, k))
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}