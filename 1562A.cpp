#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int l, r, ans, a;
        cin >> l >> r;
        ans = (r + 1) / 2;
        if (l > ans)
        {
            cout << r - l << endl;
        }
        else
            cout << ans - 1 << endl;
    }

    return 0;
}