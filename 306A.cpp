#include <iostream>
using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;
    int a, b;
    a = n / m;
    b = n % m;
    for (int i = 0; i < m - b; i++)
    {
        cout << a << " ";
    }
    for (int i = 0; i < b; i++)
    {
        cout << a + 1 << " ";
    }

    return 0;
}