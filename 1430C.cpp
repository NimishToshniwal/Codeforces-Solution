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
        priority_queue<int> p;
        int n, a, b, c;
        cin >> n;
        cout << 2 << endl;
        for (int i = n; i >= 1; i--)
        {
            p.push(i);
        }
        while (p.size() - 1 > 0)
        {
            a = p.top();
            p.pop();
            b = p.top();
            p.pop();
            cout << a << " " << b << endl;
            c = a + b;
            if (c & 1)
            {
                c++;
            }
            c /= 2;
            p.push(c);
        }
    }
    return 0;
}