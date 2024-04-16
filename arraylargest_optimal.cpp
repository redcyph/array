//TC :O(N) , SC :O(1)


#include <bits/stdc++.h>
using namespace std;

int largestElement (int arr[], int n) {
    int max = arr[0];
    for (int i=0; i<=n-1; i++) {
        if (max<arr[i]) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int n;
    cout<<"enter the size : ";
    cin>>n;
    int arr[n];

    cout<<"enter the numbers :"<<endl;
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }

    cout<<"largest element in array :"<<largestElement(arr, n);
    return 0;
}