#include<iostream>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    //integers can be intiallised or declared using these 3 data types
    // int 
    int a=10;
    // long
    long b= 15;
    //lomg long
    long long c=156;
    cout << a <<" "<< b << " " << c <<  endl;
    //float , double for fractional values
    float d=5.6;
    double e=1234.456789;
    cout << d << " " << e << endl;

    //string data type
    string s;
    cin >> s;
    cout << s;
    string str;
    getline(cin , str);
    cout << str;

    //char data type
    char ch;
    cin >> ch;
    cout << ch;
    return 0;
}