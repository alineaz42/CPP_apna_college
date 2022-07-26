// sum of every subarray
#include<iostream>


using namespace std;


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int curr=0;
    for(int i=0;i<n;i++){
        curr=0;
        for(int j=i;j<n;j++){
            curr=curr+arr[j];
            cout<<curr<<endl;
        }
    }
    return 0;
}
/*
#include<iostream>
// every sub array is a sub sequence but every sub sequence is not a sub array

using namespace std;


int main(){
    //sub array and sub sequence of array
    // sub array with n elements nC2+n=n(n+1)/2

    // number of sub sequence is 2^n with n elements
    return 0;
}
*/
/*
#include<iostream>


using namespace std;
int max(int a,int b){
    if(a>b){
        return a;
    }
    return b;
}


// Ex: Given an arry print the max till i
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int mx =-19999999;
    for(int i=0;i<n;i++){
        mx = max(mx,arr[i]);
        cout<<mx<<endl;
    }
    return 0;
}
*/