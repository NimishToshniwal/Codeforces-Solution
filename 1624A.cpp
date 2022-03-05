#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int MAX = INT_MIN;
        int MIN = INT_MAX;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] > MAX)
            {
                MAX = a[i];
            }
            if (a[i] < MIN)
            {
                MIN = a[i];
            }
        }
        cout << MAX - MIN << endl;
    }

    return 0;
}