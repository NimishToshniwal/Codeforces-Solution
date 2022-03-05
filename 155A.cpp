#include <iostream>
using namespace std;

int main()
{
    int n, MIN, MAX;
    int count = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (arr[0] > arr[1])
    {
        MAX = arr[0];
        MIN = arr[1];
    }
    else
    {
        MAX = arr[1];
        MIN = arr[0];
    }

    for (int i = 2; i < n; i++)
    {
        if (arr[i] > MAX)
        {
            MAX = arr[i];
            count++;
        }
        else if (arr[i] < MIN)
        {
            MIN = arr[i];
            count++;
        }
        else
            continue;
    }
    if (n == 1)
    {
        cout << 0;
    }
    else if (n == 2)
    {
        if (arr[0] != arr[1])
        {
            cout << 1;
        }
        else
            cout << 0;
    }

    else
    {
        if (arr[0] != arr[1])
        {
            cout << count + 1;
        }
        else
            cout << count;
    }
    return 0;
}