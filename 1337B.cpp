#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        bool flag = 0;
        int x, n, m, x1, x2, n1, m1;
        cin >> x >> n >> m;
        x1 = x2 = x;
        n1 = n;
        m1 = m;
        // for (int i = 0; i < n + m; i++)
        // {
        //     if (x > 10 && n != 0)
        //     {
        //         x = (x / 2) + 10;
        //         n--;
        //         cout<<x<<endl;
        //     }
        //     else if ((x > 0) && m != 0)
        //     {
        //         x -= 10;
        //         m--;
        //         if (x == 0)
        //         {
        //             flag = 1;
        //             break;
        //         }
        //         cout<<x<<endl;
        //     }
        //     else if (x <= 0)
        //     {
        //         flag = 1;
        //         break;
        //         cout<<x<<endl;
        //     }

        //     else
        //     {
        //         break;
        //     }
        //     continue;
        // }
        while (n1-- && x2 > 0)
        {
            x2 = (x2 / 2) + 10;
            if (x2 <= 0)
            {
                flag = 1;
                break;
            }
        }
        while (m1-- && x2 > 0)
        {
            x2 = x2 - 10;
            if (x2 <= 0)
            {
                flag = 1;
                break;
            }
        }
        while (m-- && x1 > 0)
        {
            x1 = x1 - 10;
            if (x1 <= 0)
            {
                flag = 1;
                break;
            }
        }
        while (n-- && x1 > 0)
        {
            x1 = (x1 / 2) + 10;
            if (x1 <= 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        // while (x > 10 || n != 0)
        // {
        //     x = (x / 2) + 10;
        //     n--;
        // }
        // while (x > 0 || m != 0)
        // {
        //     x -= 10;
        //     m--;
        // }
        // cout << x;
        // if (flag==0)
        // {
        //     cout << "NO" << endl;
        // }
        // else
        // {
        //     cout << "YES" << endl;
        // }
    }
    return 0;
}