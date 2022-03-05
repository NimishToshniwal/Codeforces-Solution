#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;
    bool a[901] = {false};
    int arr[k];
    rep(i, k)
    {
        cin >> arr[i];
        a[arr[i]] = true;
    }
    int c = 0;
    for (int i = 0; i < k; i++)
    {
        cout << arr[i] << " ";
        for (int j = 1; j < n; j++)
        {
            c++;
            while (a[c])
            {
                c++;
            }
            cout << c << " ";
        }
        cout << endl;
    }
    return 0;
}