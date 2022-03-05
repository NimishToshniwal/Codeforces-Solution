#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    char arr[n][m];
    for (int i = 0; i < n; i += 2)
    {
        for (int j = 0; j < m; j++)
        {
            arr[i][j] = '#';
        }
    }
    for (int i = 1; i < n - 1; i += 2)
    {
        if ((i - 1) % 4 == 0)
        {
            for (int j = 0; j < m - 1; j++)
            {
                arr[i][j] = '.';
            }
            arr[i][m - 1] = '#';
        }
        else
        {
            for (int j = 1; j < m; j++)
            {
                arr[i][j] = '.';
            }
            arr[i][0] = '#';
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
        
    }
    
    return 0;
}