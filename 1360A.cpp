#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (a == b)
        {
            cout << 4 * a * b<<endl;
        }
        else
        {
            int MAX = max(a, b);
            int MIN = min(a, b);
            if (MAX > 2 * MIN)
            {
                cout << MAX * MAX<<endl;
            }
            else
                cout<<4*MIN*MIN<<endl;
        }
    }

    return 0;
}