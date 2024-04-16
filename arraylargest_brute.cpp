//TC :O(N*log(N)) , SC :O(n)


#include <bits/stdc++.h>
using namespace std;

int largestElement (vector<int>& arr) {
    sort(arr.begin(), arr.end());
    return arr[arr.size()-1];
}

int main() {
    int n;
    int a;
    cout<<"enter the size of array : ";
    cin>>n;
    vector<int> arr;

    cout<<"enter the numbers :"<<endl;
    for (int i=0; i<=n-1; i++) {
        cin>>a;
        arr.push_back(a);
    }

    cout<<"largest element in array : "<<largestElement(arr);

    return 0;
}