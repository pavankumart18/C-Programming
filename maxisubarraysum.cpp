#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int currSum[n+1];
    currSum[0]=0;

    for(int i=1;i<n+1;i++){
        currSum[i]=arr[i-1]+currSum[i-1];
    }

    int maxSum=INT16_MIN;

    for(int i=1;i<n+1;i++){
        for(int j=0;j<i;j++){
            int sum=currSum[i]-currSum[j];
            maxSum=max(maxSum,sum);
        }
    }

    cout<<maxSum<<" ";

    return 0;
}
