#include<iostream>
#include<string>
using namespace std;

int main(){
    int a[4];
    for (int i = 0; i < 4; i++)
    {
        cin>>a[i];
    }
    int count = 0;
    string s;
    cin>>s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]=='1')
        {
            count+=a[0];
        }
        else if (s[i]=='2')
        {
            count+=a[1];
        }
        else if (s[i]=='3')
        {
            count+=a[2];
        }
        else
            count+=a[3];
        
    }
    cout<<count;
    

    return 0;
}