#include<iostream>

using namespace std;

int main(){
    char button;
    cout<<"Input a character ";
    cin>>button;

    switch(button){
        case 'a' :
            cout<<"hello";
            break;
        case 'b' :
            cout<<"Hola";
            break;
        default:
            cout<<"not matching";
            break;
    }
    return 0;
}