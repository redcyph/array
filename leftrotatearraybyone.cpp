//TC: O(n) , SC:O(1)

#include <bits/stdc++.h>
using namespace std;

void rotate1(vector<int> & arr) {
    int temp = arr[0];
    for (int i=0; i<arr.size(); i++) {
        arr[i]=arr[i+1];
        // if (arr[i]==arr[arr.size()-1]) {
        //     arr[arr.size()-1] = temp;
        // } 
    }
    arr[arr.size()-1] = temp;  //this can be also written inside the for loop 
}

int main() {
    int n;
    int a;
    vector <int> arr;
    cout<<"enter the total number :";
    cin>>n;

    for (int i=0; i<n; i++) {
        cin>>a;
        arr.push_back(a);
    }

    cout<<"array before :"<<endl;
    for (int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }

    rotate1(arr);

    cout<<"\narray after :"<<endl;
    for (int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}