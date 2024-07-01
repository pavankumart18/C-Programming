//Find Factorial of given Number

#include<iostream>
using namespace std;

void factorial(int n){
    for(int i=n-1;i>0;i--){
        n*=i;
    }
    cout<<n;
}

int main(){
    int n;
    cout<<"Enter the Value of N : ";
    cin>>n;

    factorial(n);
    return 0;
}