#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    stack<char> st;
    string s;
    cin >> s;
    int n = s.size();
    rep(i, n)
    {
        if (st.empty())
        {
            st.push(s[i]);
            continue;
        }
        if (st.top() == s[i])
        {
            st.pop();
        }
        else
        {
            st.push(s[i]);
        }
    }
    if (st.empty())
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}