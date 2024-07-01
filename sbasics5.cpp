#include<iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif // !ONLINE_JUDGE
    int day;
    cin >> day;
    switch (day)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << " Wednesday";
        break;
    case 4:
        cout << "THursday";
        break;
    case 5:
        cout <<"Friday";
        break;
    default:
        cout <<"Saturday";
        break;
    }
    return 0;
}