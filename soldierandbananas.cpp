#include <iostream>
using namespace std;

int main()
{
    int k, n, w;
    cin >> k >> n >> w;

    int output = (w * (w + 1) * k) / 2;
    if (output >= n)
    {
        cout << (output - n);
    }
    else
        cout << 0;
    return 0;
}