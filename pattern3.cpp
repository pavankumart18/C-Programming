/*  Inverted half pyramid
*****
****
***
**
*
*/
#include<iostream>
using namespace std;

int main(){
    int row;
    cout<<"Enter the Number of rows : ";
    cin>>row;
    int col;
    cout<<"Enter the Number of Columns : ";
    cin>>col;

    for (int i=0;i<row;i++){
        for(int j=i;j<col;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}