#include <bits/stdc++.h>

using namespace std;
#define ll long long

#define MOD 1000000007

void solve()
{
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        string st;
        cin >> st;
        string ans;
        ans = st;
        char r = 'R';
        char b = 'B';
        string temp(n, '?');
        // cout << temp << endl;
        int k = 1;
        if (temp == st)
        {
            for (int i = 0; i < n; i++)
            {
                if (k)
                {
                    st[i] = 'B';
                }
                else
                {
                    st[i] = 'R';
                }
                k = 1 - k;
            }
            cout << st << endl;
            continue;
        }
        for (int i = 0; i < n; i++)
        {
            if (st[i] == r || st[i] == b)
            {
                // cout <<"hii"<<endl;
                int left = i - 1;
                int right = i + 1;
                while (left >= 0 && ans[left] == '?')
                {
                    if (ans[left + 1] == r)
                    {
                        ans[left] = b;
                    }
                    else if (ans[left + 1] == b)
                    {
                        ans[left] = r;
                    }
                    left--;
                }
                while (right < n && ans[right] == '?')
                {
                    if (ans[right - 1] == r)
                    {
                        ans[right] = b;
                    }
                    else if (ans[right - 1] == b)
                    {
                        ans[right] = r;
                    }
                    right++;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}