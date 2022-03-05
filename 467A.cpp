#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        if ((b[i] - a[i]) >= 2)
        {
            count++;
        }
        continue;
    }
    cout << count;

    return 0;
}