#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int key;
    cin>>key;



    int s=0;
    int e=n;

    while (s<=e){
        int mid=(s+e)/2;
        if (arr[mid]==key){
            cout<<"Element found";
            break;
        }
        else if (key<arr[mid]){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }

    return 0;
}