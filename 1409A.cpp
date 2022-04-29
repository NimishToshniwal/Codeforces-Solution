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
        cout << ((abs(a[i] - b[i])) + 9) / 10<<endl;
    }

    return 0;
}