/*
****
****
****
****
*/
#include <iostream>
using namespace std;

int main(){
    int row;
    cout<<"Enter the Rows : ";
    cin>>row;
    int col;
    cout<<"Enter the Columns :";
    cin>>col;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}