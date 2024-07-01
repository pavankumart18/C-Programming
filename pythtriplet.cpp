//checking the sides of a triangle is pythogoriam triplet or not

#include<iostream>
using namespace std;

bool check(int a,int b,int c){
    if (a>b && a>c && a*a==(b*b+c*c)){
        return true;
    }else if (b>c && b*b==(a*a+c*c)){
        return true;
    }else{
        return c*c==(a*a+b*b);

    }
    return false;
}

int main(){
    int a,b,c;
    cout<<"Enter the sides of the triangle : ";
    cin>>a>>b>>c;

    if (check(a,b,c)){
        cout<<"Pythogoream Triplet";
    }else{
        cout<<"not a pythogorean triplet";
    }
}