#include "bits/stdc++.h"
#include<string.h>

using namespace std;
// sum of n numbers
int isPythagoreanTriplet(int a,int b,int c){
    int mx = max(a,max(b,c));
    int d,f;
    if(mx==a){
        d=b;f=c;
    }else if(mx==b){
        d=a;f=c;
    }else{
        d=a;f=b;
    }
    if(mx*mx==d*d+f*f){
        return 1;
    }
    return -1;
}
int binaryToDecimal(int n){
    int base=1;
    int des =0;
    while(n != 0){
        int temp = n%10;
        des += base*temp;
        base *=2;
        n = n/10;
    }
    return des;
}
int decimalToBinary(int n){
    int x=1;
    int ans=0;
    while(x<=n){
        x*=2;
    }
    x/=2;
    while(x>0){
        int lastDigit = n/x;
        n-=lastDigit*x;
        x/=2;
        ans=ans*10+lastDigit;
    }
    return ans;
}
int decimalToOctal(int n){
    int x=1;
    int ans=0;
    while(x<=n){
        x*=8;
    }
    x/=8;
    while(x>0){
        int lastDigit = n/x;
        n -= lastDigit*x;
        x/=8;
        ans = ans*10+lastDigit;
    }
    return ans;
}
int decimalToHexadecimal(int n){
    int x=1;
    int ans = 0;
    while(x<=n){
        x*=16;
    }
    x /= 16;
    while(x>0){
        int lastDigit = n/x;
        n -= lastDigit*x;
        x /=16;
        if(lastDigit<=9){
            ans = ans + to_string(lastDigit);
        }else{
            char c= 'A'+lastDigit-10;
            ans.push_back(c);
        }
    }
    return ans;
}
int main(){
    // pythagorean triplet
    // int a,b,c;
    // cin>>a>>b>>c;
    // if(isPythagoreanTriplet(a,b,c)==1){
    //     cout<<"Pythagorean Triplet";
    // }else{
    //     cout<<"Not a pythagorean Triplet";
    // }

    // binary to decimal
    // int n;
    // cin>>n;
    // cout<<binaryToDecimal(n)<<endl;
    // decimal to binary 
    int n;
    cin>>n;
    // cout<<decimalToBinary(n)<<endl;
    // cout<<decimalToOctal(n)<<endl;
    // cout<<decimalToHexadecimal(n)<<endl;
    return 0;
}