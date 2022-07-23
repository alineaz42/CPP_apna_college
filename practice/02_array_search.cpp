#include<iostream>

using namespace std;

int binarySearch(int a[],int n){
    int s=0;
    int e=n;
    int key=50;
    // cout<<"Enter key"<<endl;
    // cin>>key;
    while(s<=e){
        int mid=(s+e)/2;
        if(a[mid]==key){
            return mid;
        }
        else if(a[mid]>key){
            e=mid-1;
        }else{
            s=mid+1;
        }
    }
    return -1;

}
int main(){
    int n;
    // cin>>n;
    // int a[n];
    int a[5]={10,20,30,40,50};
    // for(int i=0;i<n;i++){
    //     cin>>a[i];
    // }
    // cout<<binarySearch(a,n)<<endl;
    cout<<binarySearch(a,5)<<endl;
    return 0;
}