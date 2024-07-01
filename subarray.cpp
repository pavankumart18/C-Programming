#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the Value of n: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key = 6;
    int start = 0;
    int end = 0;
    int result = 0;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];
            if (sum == key) {
                start = i;
                end = j;
                result = sum;
                break;
            } else if (sum > key) {
                break;
            }
        }
        if (result == key) {
            break;
        }
    }

    if (result == key) {
        cout << start << " " << end;
    } else {
        cout << "Subarray not found.";
    }
    return 0;
}
