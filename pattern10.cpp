/*
    *****
   *****
  *****
 *****
*****
Rhombus Pattern
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Number of Numbers";
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            cout<<" ";
        }
        for(int k=0;k<n;k++){
            cout<<"*";
        }
        cout<<endl;
    }
}