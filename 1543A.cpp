#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b, c, rem;
        cin >> a >> b;
        c = abs(a - b);
        if (a == b)
        {
            cout << 0 << " " << 0 << endl;
        }
        else
        {
            rem = a % c;
            cout << c << " " << min(rem, c - rem) << endl;
        }
    }
    return 0;
}