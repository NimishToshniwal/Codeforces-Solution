#include<iostream>
using namespace std;

int main(){
    int r, b;
    cin>>r>>b;

    cout<<min(r, b)<<" "<<abs((r-b)/2);


    return 0;
}
