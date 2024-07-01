#include<iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif // !ONLINE_JUDGE

    int age;
    cin >> age;
    if (age>=18) {
        cout << "You are an adult";
    }else{
        cout << "You are not an adult";
    }    
    return 0;
}
