#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    string s;
    cin >> s;
    int n;
    n = s.size();
    vector<int> v(n, 0);
    stack<int> st;
    int MAX = 0, count = 0;
    for (int i = 0; i < n; i++)
    {
        char c = s[i];
        if (c == '(')
        {
            st.push(i);
            continue;
        }
        if (st.empty())
        {
            continue;
        }
        int j = st.top();
        st.pop();
        v[i] = i - j + 1 + (j >= 1 ? v[j - 1] : 0);
        if (v[i] > MAX)
        {
            MAX = v[i];
            count = 1;
        }
        else if (v[i] == MAX)
        {
            count++;
        }
    }
    if (MAX == 0)
    {
        cout << 0 << " " << 1;
    }
    else
    {
        cout << MAX << " " << count;
    }
    return 0;
}