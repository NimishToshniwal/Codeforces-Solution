// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         long long int a[n];
//         int MAX = INT_MIN;
//         int MAXi = 0;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//             if (a[i] > MAX)
//             {
//                 MAX = a[i];
//                 MAXi = i + 1;
//             }
//             continue;
//         }
//         if (MAX - MAXi >= 0)
//         {
//             cout << MAX - MAXi << endl;
//         }
//         else
//             cout << 0 << endl;
//     }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long int a, MAX = 0;
        
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            MAX =max(MAX, a-i-1);
        }
        cout<<MAX<<endl;
    }

    return 0;
}