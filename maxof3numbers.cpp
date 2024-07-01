//maximum of 3 given numbers

#include <iostream>

using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif // !ONLINE_JUDGE

    int a,b,c;
    cin>>a>>b>>c;

    if (a>b && a>c){
        cout<<"A is larger";
    }else if (b>c){
        cout<<"B is larger";
    }else{
        cout<<"c is larger";
    }

    return 0;
}   
