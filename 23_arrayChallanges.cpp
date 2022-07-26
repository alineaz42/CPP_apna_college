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