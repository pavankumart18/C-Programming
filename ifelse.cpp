#include <iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif // !ONLINE_JUDGE

    int savings;
    cin>>savings;

    if (savings>5000){
        cout<<"Neha\n"<<endl;
    }else{
        cout<<"Rashmi\n"<<endl;
    }

    return 0;

        
}