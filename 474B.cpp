#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)

int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        if (arr[mid + 1] > x && arr[mid] < x)
        {
            return mid + 1;
        }
        if (arr[mid] > x)
        {
            if (mid == 0)
            {
                return 0;
            }
            else if (arr[mid - 1] < x)
                return mid;
        }
        if (arr[mid] > x)
        {
            return binarySearch(arr, l, mid - 1, x);
        }
        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}

int main()
{

    ios::sync_with_stdio(false);

    int n, m;
    cin >> n;
    int a[n];
    rep(i, n)
    {
        cin >> a[i];
        if (i > 0)
        {
            a[i] += a[i - 1];
        }
    }
    cin >> m;
    int ar[m];
    rep(i, m)
    {
        cin >> ar[i];
    }
    for (int i = 0; i < m; i++)
    {
        cout << binarySearch(a, 0, n - 1, ar[i]) + 1 << endl;
    }
    return 0;
}