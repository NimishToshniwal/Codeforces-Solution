#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int count = 0;
        while (b != 0 && c != 0&&c!=1)
        {
            c -= 2;
            b -= 1;
            count++;
        }
        while (a != 0 && b != 0&&b!=1)
        {
            b -= 2;
            a -= 1;
            count++;
        }
        cout << count * 3 << endl;
    }

    return 0;
}