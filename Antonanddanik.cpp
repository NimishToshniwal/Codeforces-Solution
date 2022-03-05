#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    int count_A = 0;
    int count_D = 0;
    string s;
    cin >>n>> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            count_A++;
        }
        else
        {
            count_D++;
        }
    }
    if (count_A > count_D)
    {
        cout << "Anton";
    }
    else if (count_A < count_D)
    {
        cout << "Danik";
    }
    else
        cout << "Friendship";

    return 0;
}