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
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
        }
        sort(a, a + n);
        int count = 0;
        int b = sum / n;
        if (sum % n != 0)
        {
            cout << "-1" << endl;
        }

        else
        {
            for (int i = 0; i < n; i++)
            {

                if (b < a[i])
                {
                    count++;
                }
                continue;
            }
            cout << count << endl;
        }
    }

    return 0;
}