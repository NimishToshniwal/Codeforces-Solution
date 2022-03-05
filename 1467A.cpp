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
        if (n == 1)
        {
            cout << 9 << endl;
        }
        else if (n == 2)
        {
            cout << 98 << endl;
        }
        else if (n == 3)
        {
            cout << 989 << endl;
        }

        else
        {
            string s1, s2 = "989";
            int a = 0;
            while (n != 3)
            {
                if (a == 9)
                {
                    s1.append(to_string(a));
                    a = 0;
                }
                else
                {
                    s1.append(to_string(a));
                    a++;
                }
                n--;
            }
            s2.append(s1);
            cout << s2 << endl;
        }
    }
    return 0;
}
// #include<bits/stdc++.h>
// #define ll              long long
// #define ull             unsigned long long
// #define pb              push_back
// #define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
// using namespace std;
// int main()
// {
//     fastread();
//     //freopen("input.txt","r", stdin);
//     ll t,n;
//     cin>>t;
//     while(t--){
//         ll k = 9;
//         cin>>n;
//         for(ll i=0; i<n; i++){
//             if(i == 0){
//                 cout<<k;
//                 k--;
//             }
//             else{
//                 cout<<k;
//                 k++;
//             }
//             if(k == 10)k = 0;
//         }
//         cout<<endl;
//     }
//     return 0;
// }