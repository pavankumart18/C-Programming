/*
0-1 pattern
0
1 0
1 0 1
0 1 0 1
0 1 0 1 0
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Number n: ";
    cin>>n;
    int k=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<k;
            if (k==1){
                k=0;
            }else{
                k=1;
            }
        }
        cout<<endl;
    }
}