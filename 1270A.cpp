#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k1, k2;
        cin >> n >> k1 >> k2;
        int a[k1], b[k2];
        for (int i = 0; i < k1; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < k2; i++)
        {
            cin >> b[i];
        }
        int MAX1 = INT_MIN;
        int MAX2 = INT_MIN;
        for (int i = 0; i < k1; i++)
        {
            if (a[i] > MAX1)
            {
                MAX1 = a[i];
            }
        }
        for (int i = 0; i < k2; i++)
        {
            if (b[i] > MAX2)
            {
                MAX2 = b[i];
            }
        }
        if (MAX1>MAX2)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
        
    }

    return 0;
}