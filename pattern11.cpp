/*
Number Pattern
   1
  1 2
 1 2 3
1 2 3 4
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number n";
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int k=1;k<i+2;k++){
            cout<<k<<" ";
        }
        cout<<endl;
    }

    return 0;
}