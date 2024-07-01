//finding the maximum or minimum in an array 

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int m=arr[0];
    int mi=arr[0];

    for(int i=0;i<n;i++){
        if (m<arr[i]){
            m=arr[i];
        }
        if (mi>arr[i]){
            mi=arr[i];
        }
    }

    cout<<m<<" "<<mi<<" ";
    return 0;
}