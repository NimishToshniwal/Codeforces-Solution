#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        cout << 1;
        for (int i = 0; i < a - 1; i++)
        {
            cout << 0;
        }
        cout << " ";
        for (int i = 0; i <= b - c; i++)
        {
            cout << 1;
        }
        for (int i = 0; i < c - 1; i++)
        {
            cout << 0;
        }
        cout << endl;
    }

    return 0;
}