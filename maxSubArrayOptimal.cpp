//TC: O(n), SC: O(1)

#include <bits/stdc++.h>
using namespace std;

long long maxsubArraySum(int arr[], int n) {
    long long sum = 0, maxi = LONG_MIN;

    for (int i=0; i<n; i++) {
        sum += arr[i];

        if (sum > maxi) maxi = sum;

        if (sum<0) sum = 0;
    }

    return maxi;
}

int main() {
    int arr[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    long long maxSum = maxsubArraySum(arr, n);
    cout<<"max subarray : "<<maxSum;
    return 0;
}