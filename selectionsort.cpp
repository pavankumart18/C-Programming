//sorting
/*
selection sort 
main rule is find the minimum element in the array and swap it with the beginning and increase the i
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the length of the array ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int i=0;
    while (i<n){
        int minimum=i;

        for(int k=i+1;k<n;k++){
            if (arr[i]>arr[k]){
                minimum=k;
            }
        }
        int temp=arr[i];
        arr[i]=arr[minimum];
        arr[minimum]=temp;
        i++;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i];
    }

    return 0;
}