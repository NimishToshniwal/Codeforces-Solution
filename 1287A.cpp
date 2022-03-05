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
        string s;
        int count = 0, temp = 0;
        cin >> n;

        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'A')
            {
                for (int j = i + 1; j <= n; j++)
                {
                    if (s[j] == 'P')
                    {
                        temp++;
                    }
                    else
                    {
                        break;
                    }
                }
                if (temp > count)
                {
                    count = temp;
                }
                temp = 0;
            }
        }
        cout << count << endl;
    }
    return 0;
}