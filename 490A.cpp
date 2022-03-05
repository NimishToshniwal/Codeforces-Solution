#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a;
    cin >> n;
    vector<int> v1, v2, v3;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a == 1)
        {
            v1.push_back(i+1);
        }
        else if (a == 2)
        {
            v2.push_back(i+1);
        }
        else
        {
            v3.push_back(i+1);
        }
    }
    int w = min(v1.size(), min(v2.size(), v3.size()));
    cout << w << endl;
    for (int j = 0; j < w; j++)
    {
        cout << v1[j] << " " << v2[j] << " " << v3[j] << endl;
    }

    return 0;
}