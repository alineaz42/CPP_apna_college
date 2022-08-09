// searching in arrays
// 1. linear search
#include<iostream>
using namespace std;
void linearSearch(){
    int n,k;
    cout<<"Enter n:\n";
    cin>>n;
    cout<<"Enter target: \n";
    cin>>k;
    int arr[n];
    cout<<"Enter the array: \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]==k){cout<<"Target is: found at: "<<i<<endl;}
        continue;
    }
    cout<<"Target is not found: ";
}
int main(){
    linearSearch();
    return 0;
}



/*
// maximum and minimum of an array
#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int maximum = INT_MIN;
    int minimum = INT_MAX;

    for(int i=0;i<n;i++){
        if(arr[i]>maximum){maximum=arr[i];}
        if(arr[i]<minimum){minimum=arr[i];}
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"The maximum is: "<<maximum<<endl;
    cout<<"The minimum is: "<<minimum<<endl;
    return 0;
}
*/


// #include<iostream>
// using namespace std;

// int main(){
//     int n;cin>>n;
//     int x=1;
//     while(x<=n){
//         x *=16;
//     }
//     cout<<x<<endl;
//     x/=16;
//     cout<<x<<endl;
//     int lastDigit =n/x;
//     cout<<lastDigit<<endl;
//     return 0;
// }