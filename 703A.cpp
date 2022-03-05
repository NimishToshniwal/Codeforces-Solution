#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }
    int count_a = 0, count_b = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > b[i])
        {
            count_a++;
        }
        else if (a[i] < b[i])
        {
            count_b++;
        }
        else
            continue;
    }
    if (count_a > count_b)
    {
        cout << "Mishka";
    }
    else if (count_a < count_b)
    {
        cout << "Chris";
    }
    else
        cout << "Friendship is magic!^^";

    return 0;
}