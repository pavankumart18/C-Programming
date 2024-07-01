#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    int sum=0;

    for(int counter=0;counter<=n;counter++){
        sum+=counter;
    }

    cout<<"sum of n natural numbers"<<sum;
}