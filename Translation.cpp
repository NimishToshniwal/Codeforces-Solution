#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1, s2;
    cin>>s1>>s2;
    bool flag=0;
    for(int i=0;i<s1.length();i++){
        if(s1[i]!=s2[s1.length()-i-1]){
            flag=1;
            break;
        }
    }
    if (flag==0)
    {
        cout<<"YES";
    }
    else
        cout<<"NO";
    
    return 0;
}