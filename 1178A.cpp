#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    int half_sum = a[0];
    int count = 0;
    string s = "1";
    for (int i = 1; i < n; i++)
    {
        if (half_sum < (sum / 2) + 1)
        {
            if (a[i] <= (a[0]) / 2)
            {
                half_sum += a[i];
                count++;
                s.append(to_string(i + 1));
            } 
            continue;
        }
        continue;
    }
    if (half_sum >= (sum / 2) + 1)
    {
        cout << count + 1 << endl;
        for (int i = 0; i < s.length(); i++)
        {
            cout << s[i] << " ";
        }
    }
    else{
        cout<<0;
    }

    return 0;
}