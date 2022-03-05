#include <iostream>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    int a = n % 10;
    int b = (n / 10) % 10;
    if (n >= 0)
    {
        cout << n;
    }
    else
    {

        cout << max(n / 10, ((n / 100) * 10) + a);
    }

    return 0;
}