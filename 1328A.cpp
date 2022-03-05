#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    long long int a[t], b[t];
    for (int i = 0; i < t; i++)
    {
        cin >> a[i] >> b[i];
    }
    for (int i = 0; i < t; i++)
    {
        if (a[i] % b[i] == 0)
            cout << 0<<endl;
        else
            cout << abs(a[i] % b[i] - b[i])<<endl;
    }

    return 0;
}