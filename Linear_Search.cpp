//TC: O(n), SC:O(1)

#include <bits/stdc++.h>
using namespace std;

int search(int arr[], int n, int num) {
    for (int i=0; i<n; i++) {
        if (arr[i]==num)
            return i;
    }
    return -1;
}

int main() {
    int n, num;
    cout<<"enter total elements :";
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<"\nenter the element you want to find :";
    cin>>num;
    cout<<search(arr, n, num);

    return 0;
}