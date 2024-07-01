/*
Repeatedly swap tow adjacent elements if there are in wrong order

time complexity is purely nsquare

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n  : ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if (arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}