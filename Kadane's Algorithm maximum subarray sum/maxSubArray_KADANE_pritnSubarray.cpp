/**
 * Kadane's algorithm follow up question that to return that subarray.
 * 
 * TIME COMPLEXITY : O(N) -> N is the size of the array.
 * SPACE COMPLEXITY : O(1) -> No extra space used.
 */

#include<bits/stdc++.h>
using namespace std;

int long long maxSubarraySum(int arr[], int n){
    long long maxi = INT_MIN;
    long long sum = 0;

    int start = 0;
    int ansStart = -1;
    int ansEnd = -1;

    for(int i = 0; i < n; i++){
        if(sum == 0) start = i;
        sum += arr[i];

        if(sum > maxi){
            maxi = sum;

            ansStart = start;
            ansEnd = i;
        }

        if(sum < 0){
            sum = 0;
        }
    }

    cout << "The subarray is: [";
    for (int i = ansStart; i <= ansEnd; i++) {
        cout << arr[i] << " ";
    }
    cout << "] ";

    return maxi;
}



int main() {
    int arr[] = {-2, -3, 4, -1, -2, 5, 1, -3};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Maximum subarray whose sum is equal to is : "<<maxSubarraySum(arr, n);
    return 0;


    return 0;
}