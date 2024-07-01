//Whether the given number is Armstrong Number or not

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Number n";
    cin>>n;
    int duplicate=n;
    int arm=0;
    int rem=0;
    while (n>0){
        rem=n%10;
        arm+=(rem*rem*rem);
        n=n/10;
    }
    if (arm==duplicate){
        cout<<"it is a arm strong Number";
    }else{
        cout<<"it is not a arm strong number";
    }

    return 0;
}