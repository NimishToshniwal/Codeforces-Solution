#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int r[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> r[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    int count_b = 0, count_r = 0;
    for (int i = 0; i < n; i++)
    {
        if (r[i] == 0 && b[i] == 1)
        {
            count_b++;
        }
        else if (r[i] == 1 && b[i] == 0)
        {
            count_r++;
        }
        continue;
    }
    if ( count_r == 0)
    {
        cout << -1;
    }
    else
    {
        cout << (count_b / count_r) + 1;
    }
    return 0;
}