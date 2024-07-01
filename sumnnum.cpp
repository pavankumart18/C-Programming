//Sum of first n natural numbers

#include<iostream>
using namespace std;

int sumn(int n){
    int sum=0;

    for(int i=1;i<=n;i++){
        sum+=i;
    }

    return sum;
}

int main(){
    int n;
    cout<<"Enter the Number n: ";
    cin>>n;

    int sum=sumn(n);

    cout<<sum<<endl;

    return 0;
}