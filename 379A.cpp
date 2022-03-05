// // a+a/b+(a/b+a%b)/b+(((a/b+a%b)/b)+a%b)/b
// #include<iostream>
// using namespace std;

// int main(){

//     int a, b;
//     cin>>a>>b;
//     // cout<<a+a/b+(a/b+a%b)/b+(((a/b+a%b)/b)+a%b)/b;
//     int remainder = ((a/b)+a%b)/b;
//     int sum = a+a/b;
//     while (remainder>=1)
//     {
//         sum+=remainder;
//         remainder = (remainder+a%b)/b;
//     }
//     cout<<sum;

//     return 0;
// }
#include <iostream>
using namespace std;

int main()
{

    int a, b;
    cin >> a >> b;
    int ans = a;
    int div, rem;
    while (a >= b)
    {
        div = a / b;
        ans += div;
        rem = a % b;
        a = div + rem;
    }
    cout << ans;

    return 0;
}