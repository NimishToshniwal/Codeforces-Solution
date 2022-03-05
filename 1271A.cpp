#include <iostream>
using namespace std;

int main()
{

    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    int MIN1, MIN2, MAX1;
    MAX1 = max(e, f);
    MIN1 = min(b, c);
    MIN2 = min(a, min(b, c));
    if (d < MIN2)
    {
        cout << d * MAX1;
    }
    else
    {
        if (e > f)
        {
            if (a >= d)
            {
                cout << e * d;
            }
            else
            {
                cout << (e * a) + f * (min(MIN1, (d - a)));
            }
        }
        else if (f > e)
        {
            cout << (f * MIN1) + e * (min((d - MIN1), a));
        }
        else
        {
            cout << (e * a) + f * (min((d - a), MIN1));
        }
    }

    return 0;
}