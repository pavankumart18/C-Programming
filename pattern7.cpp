/*
*      *
**    **
***  ***
********
********
***  ***
**    **
*      *
*/
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number of rows: ";
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<2*n;j++){
            if(j<i+1 or j>2*n-2-i){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<2*n;j++){
            if(j<i+1 or j>2*n-2-i){
                cout<<" ";
            }else{
                cout<<"*";
            }
        }
        cout<<endl;
    }

}