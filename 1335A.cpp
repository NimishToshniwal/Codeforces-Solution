#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    long long int n[t];
    for (int i = 0; i < t; i++)
    {
        cin >> n[i];
       
    }
    for (int i = 0; i < t; i++)
    {
        if (n[i] % 2 == 0)
        {
            cout << (n[i] / 2) - 1<<endl;
        }
        else
            cout << (n[i] - 1) / 2<<endl;
    }
    return 0;
}