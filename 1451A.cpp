#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        if (n == 1)
        {
            cout << 0 << endl;
        }
        else if (n>1&&n<7)
        {
            if (n == 2)
            {
                cout << 1 << endl;
            }
            else if (n == 5)
            {
                cout << 3 << endl;
            }

            else
                cout << 2 << endl;
        }
        else
        {
            if (n % 2 == 0)
            {
                cout << 2 << endl;
            }
            else
                cout << 3 << endl;
        }
    }
    return 0;
}