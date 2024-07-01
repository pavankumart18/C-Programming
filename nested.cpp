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
        if(savings>10000){
            cout<<"Roadtrip with manasa\n";
        }else{
            cout<<"Shopping";
        }
    }else if(savings>2000){
        cout<<"Rashmi\n"<<endl;
    }else{
        cout<<"Friends\n"<<endl;
    }

    return 0;

        
}