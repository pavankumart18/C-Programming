#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int i=0;
    int j=n-1;

    int k=7;

    while (i<j){
        cout<<arr[i]<<" "<<arr[j];
        if (arr[i]+arr[j]==k){
            cout<<i<<" "<<j;
            break;
        }else if(arr[i]+arr[j]<k){
            i=i+1;
        }else{
            j=j-1;
        }
    }

    return 0;
}