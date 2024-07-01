#include<iostream>
using namespace std;

int main(){
    for(int i=2;i<=100;i++){
        int num=2;
        int count=0;
        while (num<i/2){
            if (i%num==0){
                count++;
            }
            num++;
        }
        if (count!=0){
            continue;
        }
        cout<<i<<endl;
    }
}