#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b, c, a1, b1, c1;
        cin >> a >> b >> c;

        if ((a + c) % (2 * b) == 0 && (a + c) / (2 * b) >= 1)
        {
            cout << "YES" << endl;
        }
        else if ((2 * b - c) % (a) == 0 && ((2 * b - c) / a) >= 1)
        {
            if (2 * b - c == 0)
            {
                cout << "NO" << endl;
            }
            else
                cout << "YES" << endl;
        }
        else if ((2 * b - a) % (c) == 0 && ((2 * b - a) / c) >= 1)
        {
            if (2 * b - a == 0)
            {
                cout << "NO" << endl;
            }
            else
                cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}