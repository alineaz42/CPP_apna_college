#include<iostream>
using namespace std;

int main(){
    int n;cin>>n;
    int x=1;
    while(x<=n){
        x *=16;
    }
    cout<<x<<endl;
    x/=16;
    cout<<x<<endl;
    int lastDigit =n/x;
    cout<<lastDigit<<endl;
    return 0;
}