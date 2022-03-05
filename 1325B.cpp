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
        long long int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int count = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] != a[i + 1])
            {
                count++;
            }
            continue;
        }
        if (n == 0)
        {
            cout << "0";
        }
        else
            cout << count + 1 << endl;
        count = 0;
    }

    return 0;
}