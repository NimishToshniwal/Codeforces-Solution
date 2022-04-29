#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, k, sum = 0, count = 0;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> k;
        if (k >= 0)
            sum += k;
        else
        {
            if (sum == 0)
                count++;
            else
                sum--;
        }
    }
    cout << count << endl;
    return 0;
}