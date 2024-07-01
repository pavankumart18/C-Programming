/*
Inverted  Number pattern
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
*/
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    for(int i=0;i<n;i++){
        int k=1;
        for(int j=0;j<n-i;j++){
            cout<<k;
            k=k+1;
        }
        cout<<endl;
    }
}