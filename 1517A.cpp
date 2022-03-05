// #include <iostream>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     long long int a = 205000000000000000;
//     while (t--)
//     {
//         long long int n;
//         cin >> n;
//         int ans = 0;
//         for (int i = a; i > 2050; i /= 10)
//         {
//             ans += n / a;
//             n = n % a;
//             a /= 10;
//         }

//         cout << ans << endl;
//     }

//     return 0;
// }
#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;
    int a = 2050;
    while (t--)
    {
        long long int n;
        cin >> n;
        int ans = -1;
        if (n % a == 0)
        {
            ans = 0;
            n = n / a;
            while (n)
            {
                ans += n % 10;
                n /= 10;
            }
        }
        cout << ans << endl;
    }
    return 0;
}