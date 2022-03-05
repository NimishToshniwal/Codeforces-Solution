#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int upvotes = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
            {
                upvotes++;
            }
            else if (a[i] == 2)
            {
                continue;
            }
            else
                upvotes++;
        }
        cout << upvotes << endl;
    }

    return 0;
}