#include<iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif // !ONLINE_JUDGE
    int age;
    cin >> age;
    if (age < 18){
        cout<<"not eligible for job";
    }else{
        if (age <= 54){
            cout<<"eligible for job";
        }else if(age<=57){
            cout<<"eligible for job , but retirement soon";
        }else{
            cout<<"retirement soon";
        }

    }
    return 0;
}