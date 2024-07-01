#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value to be find ";
    cin>>n;
    int arr[5]={10,20,30,40,50};

    for(int i=0;i<5;i++){
        if (arr[i]==n){
            cout<<"Element found";
            break;
        }
    }

    return 0;
}