#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == "Tetrahedron")
        {
            sum += 4;
        }
        else if (a[i] == "Cube")
        {
            sum += 6;
        }
        else if (a[i] == "Octahedron")
        {
            sum += 8;
        }
        else if (a[i] == "Dodecahedron")
        {
            sum += 12;
        }
        else if (a[i] == "Icosahedron")
        {
            sum += 20;
        }
        else
            continue;
    }
    cout << sum;

    return 0;
}