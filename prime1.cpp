// checking whether the given number is prime or not
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cout<<"enter the number n";
    cin>>n;

    bool flag=true;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            flag=false;
            break;
        }
    }
    if (flag==true){
        cout<<"It is a Prime";
    }else{
        cout<<"Not a Prime";
    }

    return 0;
}