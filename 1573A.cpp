#include <iostream>
#include <string>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == '0')
            {
                continue;
            }
            else
                count = count + s[i] - 47;
        }
        count += s[n - 1] - 48;
        cout << count << endl;
    }

    return 0;
}