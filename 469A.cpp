#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int p, q, a[2 * n];
    cin >> p;
    for (int i = 0; i < p; i++)
    {
        cin >> a[i];
    }
    cin >> q;
    for (int i = p; i < p + q; i++)
    {
        cin >> a[i];
    }
    sort(a, a + p + q);
    int count = 0;
    for (int i = 0; i < p + q - 1; i++)
    {
        if (a[i] != a[i + 1])
        {
            count++;
        }
        continue;
    }
    if (p + q == 0)
    {
        cout << "Oh, my keyboard!";
    }
    else
    {
        if (count + 1 == n)
        {
            cout << "I become the guy.";
        }
        else
            cout << "Oh, my keyboard!";
    }
    return 0;
}