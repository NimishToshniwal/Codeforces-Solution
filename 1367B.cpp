#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int count_even_at_odd = 0, count_odd_at_even = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0 && a[i] % 2 == 1)
            {
                count_odd_at_even++;
            }
            else if (i % 2 == 1 && a[i] % 2 == 0)
            {
                count_even_at_odd++;
            }
            continue;
        }
        if (count_even_at_odd == count_odd_at_even)
        {
            cout << count_even_at_odd << endl;
            ;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}