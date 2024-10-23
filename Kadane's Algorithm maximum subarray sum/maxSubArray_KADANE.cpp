/**
 * Kadane's algorithm 
 * 
 * TIME COMPLEXITY : O(N) -> N is the size of the array.
 * SPACE COMPLEXITY : O(1) -> No extra space used.
 */

#include<iostream>
using namespace std;

int long long maxSubarraySum(int arr[], int n){
    long long maxi = INT8_MIN;
    long long sum = 0;

    for(int i = 0; i < n; i++){
        sum += arr[i];

        if(sum > maxi){
            maxi = sum;
        }

        if(sum < 0){
            sum = 0;
        }
    }
    return maxi;
}



int main() {
    int arr[] = {-2, -3, 4, -1, -2, 5, 1, -3};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Maximum subarray whose sum is equal to is : "<<maxSubarraySum(arr, n);
    return 0;


    return 0;
}