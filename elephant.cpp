#include <iostream>
using namespace std;

int main()
{
    int x;
    int a, b, c, d, e;
    cin >> x;
    a = x / 5;
    x %= 5;
    b = x / 4;
    x %= 4;
    c = x / 3;
    x %= 3;
    d = x / 2;
    x %= 2;
    e = x;
    cout << a + b + c + d + e;

    return 0;
}