#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b, c, x;
        cin >> a >> b >> c;
        x = abs(a - b) + abs(b - c) + abs(c - a);
        if (x >= 4)
        {
            cout << x - 4 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }

    return 0;
}