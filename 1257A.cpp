#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, a, b, c;
        cin >> n >> x >> a >> b;
        if (a > b)
        {
            c = a - b;
        }
        else{
            c = b - a;
        }
        int count = 0;
        if (c+x<n)
        {
            cout<<c+x<<endl;
        }
        else
            cout<<n-1<<endl;
        
    }

    return 0;
}
