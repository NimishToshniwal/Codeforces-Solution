#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int k;
        cin >> k;

        for (int i = 0;; i++)
        {
            if (i % 10 == 3 || i % 3 == 0)
            {
                continue;
            }
            if (--k == 0)
            {
                cout << i << endl;
                break;
            }
        }
    }

    return 0;
}