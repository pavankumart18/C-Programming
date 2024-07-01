#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int check[n];
    for(int i=0;i<n;i++){
        check[i]=false;
    }

    for(int i=0;i<n;i++){
        if (arr[i]>=0){
            check[arr[i]]=true;
        }
    }
    for(int i=0;i<n;i++){
        if (check[i]==false){
            cout<<i;
            break;
        }
    }
}