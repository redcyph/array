//TC: O(N), SC: O(1)

#include <bits/stdc++.h>
using namespace std;

int removeDuplicates (vector<int> &arr) {
    int i=0;
    for (int j=1; j<arr.size(); j++) {
        if (arr[i] != arr[j]) {
            i++;
            arr[i] = arr[j];
        }
    }
    return i+1;
}

int main() {
    int n;
    int a;
    vector<int> arr;

    cout<<"enter the total elements :";
    cin>>n;
    for (int i=0; i<n; i++) {
        cin>>a;
        arr.push_back(a);
    }

    cout<<"total number of unique elements are :"<<removeDuplicates(arr);
}