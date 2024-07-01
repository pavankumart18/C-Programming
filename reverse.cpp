//Reverse a Number

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the NUmber N";
    cin>>n;

    int result=0;
    int rem=0;
    while (n>0){
        rem=n%10;
        result=rem+(10*result);
        n=n/10;
    }
    cout<<result;
    return 0;
}