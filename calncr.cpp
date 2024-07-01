//Calculate Ncr it is a commbination formula

#include<iostream>
using namespace std;

int factorial(int n){
    for (int i=n-1;i>0;i--){
        n*=i;
    }
    return n;
}

int combination(int n ,int r){
    return factorial(n)/(factorial(n-r)*factorial(r));
}

int main(){
    int n,r;
    cout<<"Enter the value of n and r";
    cin>>n>>r;

    int k=combination(n,r);
    cout<<k;

    return 0;
}