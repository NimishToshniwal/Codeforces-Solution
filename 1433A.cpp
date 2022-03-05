#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    string s[t];
    for(int i=0;i<t;i++){
        cin>>s[i];
    }
    for(int i=0;i<t;i++){
        int a=s[i].length(), b=a*(a+1)/2;
        int first_char=(s[i][0]);
        int total=b+((first_char-1)*10);
        cout<<total-480<<endl;
    }


    return 0;
}