/**
 * Pattern 1 : Constant Window
 * arr = [-1, 2, 3, 3, 4, 5, -1]  ; k = 4;
 * 1 window:  index = 0 to index = 3 ; sum = 7 ;maxSum = 7
 * 2 window:  index = 1 to index 4 ; sum = 12; maxSum = 12
 * 3 window:  index = 2 to index 5 ; sum = 15; maxSum = 15(maximum)
 * 4 window:  index = 3 to index 6 ; sum = 11; maxSum = 15
 * Output : 15
 * Objective : The subarray with k element which has the highest sum.
 */

#include<bits/stdc++.h>
using namespace std;

int maxSubarraySum(vector<int> arr, int k){
    int n = arr.size();
    int maxSum = INT_MIN;
    int sum = 0;

    for(int i = 0; i < k; i++){
        sum += arr[i];
    }
    maxSum = sum;

    int i = 0;
    int j = k - 1;
    while(j < n - 1){
        sum -= arr[i];
        i++;
        j++;
        sum += arr[j];
        maxSum = max(maxSum, sum);
    }
    return maxSum;
}


int main() {
    vector<int> arr = {-1, 2, 3, 3, 4, 5, -1};
    cout<<maxSubarraySum(arr, 4);


    return 0;
}