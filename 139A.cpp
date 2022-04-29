#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, sum = 0, sum1 = 0;
    cin >> n;
    int a[7];
    rep(i, 7)
    {
        cin >> a[i];
        sum += a[i];
    }
    if (sum >= n)
    {
        // cout<<"a"<<endl;
        for (int i = 0; i < 7; i++)
        {
            sum1 += a[i];
            if (sum1 >= n)
            {
                // cout<<"i1 = ";
                cout << i + 1 << endl;
                ;
                break;
            }
        }
    }
    else
    {
        if (n % sum == 0)
        {
            // cout<<"b"<<endl;
            n = n - ((n / sum) - 1) * sum;
            for (int i = 0; i < 7; i++)
            {
                sum1 += a[i];
                if (sum1 >= n)
                {
                    // cout<<"i2 = ";
                    cout << i + 1 << endl;
                    break;
                }
            }
        }
        else
        {
            // cout<<"c"<<endl;
            n = n % sum;
            for (int i = 0; i < 7; i++)
            {
                sum1 += a[i];
                if (sum1 >= n)
                {
                    // cout<<"i3 = ";
                    cout << i + 1 << endl;
                    break;
                }
            }
        }
    }

    return 0;
}