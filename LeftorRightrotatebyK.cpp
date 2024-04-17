/*TC:O(n), SC:O(k), since k array elements needs to be stored in a temp array*/

#include <bits/stdc++.h>
using namespace std;

void RotatetoRight(int arr[], int n, int k) {
  if (n == 0)
    return;
  k = k % n;
  if (k > n)
    return;
  int temp[k];
  for (int i = n - k; i < n; i++) {
    temp[i - n + k] = arr[i];
  }
  for (int i = n - k - 1; i >= 0; i--) {
    arr[i + k] = arr[i];
  }
  for (int i = 0; i < k; i++) {
    arr[i] = temp[i];
  }
}

void RotatetoLeft(int arr[], int n, int k){
  if (n == 0)
    return;
  k = k % n;
  if (k > n)
    return;
  int temp[k];
  for (int i = 0; i < k; i++) {
    temp[i] = arr[i];
  }
  for (int i = 0; i < n - k; i++) {
    arr[i] = arr[i + k];
  }
  for (int i = n - k; i < n; i++) {
    arr[i] = temp[i - n + k];
  }
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


}
