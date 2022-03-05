#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, count_X = 0, count_x = 0;
    ;
    cin >> n;
    string s;
    cin >> s;
    rep(i, n)
    {
        if (s[i] == 'X')
        {
            count_X++;
        }
        else
        {
            count_x++;
        }
    }
    cout << abs(count_X - count_x) / 2 << endl;
    if (count_X > count_x)
    {
        rep(i, n)
        {
            if (s[i] == 'X')
            {
                s[i] = 'x';
                count_X--;
                count_x++;
                if (count_X == count_x)
                {
                    break;
                }
            }
            continue;
        }
    }
    else if (count_X < count_x)
    {
        rep(i, n)
        {
            if (s[i] == 'x')
            {
                s[i] = 'X';
                count_x--;
                count_X++;
                if (count_X == count_x)
                {
                    break;
                }
            }
            continue;
        }
    }
    rep(i, n)
    {
        cout << s[i];
    }
    return 0;
}