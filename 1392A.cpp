#include <iostream>
#include <set>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        set<long long> s;
        long long a;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            s.insert(a);
        }
        if (s.size() == 1)
        {
            cout << n << endl;
        }
        else
            cout << 1 << endl;
    }

    return 0;
}