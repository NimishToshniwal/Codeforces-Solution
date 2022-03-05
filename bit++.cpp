// #include<iostream>
// using namespace std;

// int main(){

//     int n, count, X=0;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//         cout<<endl;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         count+=arr[i];
//     }

//     cout<<count;

//     return 0;
// }
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    int x(0);
    cin >> n;

    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (s[1] == '+')
        {
            ++x;
        }
        else
        {
            --x;
        }
    }

    cout << x << endl;
    return 0;
}