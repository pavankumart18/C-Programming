/* Hollow Rectangle
*******
*     *
*     *
*     *
*******
*/
#include <iostream>
using namespace std;

int main(){
    int row;
    cout<<"enter the number of rows";
    cin>>row;
    int col;
    cout<<"enter the number of columns";
    cin>>col;

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if (i==0 || i==row-1 || j==0 || j==col-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}