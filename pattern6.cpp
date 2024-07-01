/*
Floyyds triangle
1
23
456
78910
1112131415
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value N : ";
    cin>>n;

    int k=0;
    for (int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<k+1<<" ";
            k++;
        }
        cout<<endl;
    }

    return 0;
}