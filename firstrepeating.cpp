#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the Value of n";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int arr_idx[n];
    for(int i=0;i<n;i++){
        arr_idx[i]=-1;
    }
    int mini=INT16_MAX;
    for(int i=0;i<n;i++){
        if (arr_idx[arr[i]] == -1){
            arr_idx[arr[i]]=i;
        }else{
            mini=min(mini,arr_idx[arr[i]]);
        }
    }

    cout<<mini;
    return 0;
}