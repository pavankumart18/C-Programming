//Print all Prime Number Between Given 2 Numbers

#include<iostream>
using namespace std;

void prime2(int a,int b){
    for(int i=a;i<=b;i++){
        int count=0;

        for(int j=2;j<=sqrt(i);j++){
            if (i%j==0){
                count=1;
                break;
            }
        }

        if (count==0 && i!=1){
            cout<<i<<endl;
        }
    }
    return;
}

int main(){
    int a;
    int b;
    cout<<"Enter two numbers A and B : ";
    cin>>a>>b;
    prime2(a,b);
    return 0;
}