#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        int count = 0;
        while (n % 5 == 0)
        {
            n = (n * 4) / 5;
            count++;
        }
        while (n % 3 == 0)
        {
            n = (n * 2) / 3;
            count++;
        }
        while (n % 2 == 0)
        {
            n /= 2;
            count++;
        }
        if (n == 1)
        {
            cout << count << endl;
        }
        else
            cout << -1 << endl;
    }
    return 0;
}