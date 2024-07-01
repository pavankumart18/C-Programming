// printing fibonacci sequence

#include<iostream>
using namespace std;

int fibonacci(int n){
    int fib1=1;
    int fib2=1;

    cout<<fib1<<" ";
    cout<<fib2<<" ";

    for(int i=2;i<n;i++){
        int temp=fib2;
        fib2=fib1+fib2;
        fib1=temp;
        cout<<fib2<<" ";
    }

    return 0;
}

int main(){
    int n;
    cout<<"Enter the limit of the fibonacci Numbers";
    cin>>n;

    fibonacci(n);

    return 0;
}