#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a, b;

    cin >> a >> b;
    int l = a.length();
    int arr[l];
    for (int i = 0; i < l; i++)
    {
        arr[i] = (a[i]) ^ (b[i]);
    }
    for (int i = 0; i < l; i++)
    {
        cout << arr[i];
    }

    return 0;
}