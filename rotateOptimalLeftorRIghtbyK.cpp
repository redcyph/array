//TC:O(n), SC:O(1)

#include <bits/stdc++.h>
using namespace std;

void RotatetoRight(int arr[], int n, int k){
  // Reverse first n-k elements
  reverse(arr+n-k, arr+n);
  // Reverse last k elements
  reverse(arr, arr+n-k);
  // Reverse whole array
  reverse(arr, arr+n);
}

void RotatetoLeft(int arr[], int n, int k){
  // Reverse first k elements 
  reverse(arr, arr+k);
  // Reverse last n-k elements
  reverse(arr+k, arr+n);
  // Reverse whole array
  reverse(arr, arr+n);
}

int main() {
    int n;
    int k;
    char c;
    cout<<"enter total elements :";
    cin>>n;

    cout<<"enter which way you want to rotate ? [L/R] :";
    cin>>c;

    int arr[n];
    cout<<"enter the elements :"<<endl;
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }

    cout<<"array before rotation:"<<endl;
    for (int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }

    cout<<"\nenter the place by you want to rotate :";
    cin>>k;

    if (c=='l' || c=='L') {
        RotatetoLeft(arr, n, k);
    }

    else if (c=='r' || c=='R') {
        RotatetoRight(arr, n, k);
    }
    else 
        cout<<"wrong input";

    cout<<"array after rotation:"<<endl;
    for (int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}

