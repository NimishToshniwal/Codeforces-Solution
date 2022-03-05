// Is your horseshoe on the other hoof?
#include <iostream>
using namespace std;

int main()
{
    int count=0;
    long long int arr[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if (arr[i] == arr[j])
            {
                count += 1;
                break;
            }
        }
    }
    cout<<count;
    return 0;
}