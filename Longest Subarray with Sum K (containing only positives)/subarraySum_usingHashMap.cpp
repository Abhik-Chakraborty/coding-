/**
 * This code will be optimal for an array having both Positives, Negatives and 0s.
 * But if the array is having only positives numbers then its better but can be optimal.  
 */

#include<bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK(int arr[], int k, int n){
    map<int, int> preSumMap;
    int sum = 0;
    int maxLen = 0;

    for(int i = 0; i < n; i++){
        sum += arr[i];

        if(sum == k){
            maxLen = max(maxLen, i+1);
        }
        int rem = sum - k; 

        if(preSumMap.find(rem) != preSumMap.end()){
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }
        if(preSumMap.find(sum) == preSumMap.end()){
            preSumMap[sum] = i;
        }
    }
    return maxLen;
}


int main () {
    int arr[] = {1, 2, 3, 1, 1, 1, 1, 4, 2, 3};
    // int arr[] = {2, 0, 0, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 4;
    int longestSubarray = longestSubarrayWithSumK(arr, k, n);
    cout<<"Longest Subarray with Sum K is : "<<longestSubarray;

    return 0;
}

/**
 * Time Complexity : Since we are using ordered map -> O( N x log N)
 * If we are using unordered map -> O(N x 1) => best case but for worst case its ~ O(N^2);
 * 
 * 
 * Space Complexity : Worst case -> O(N);
 */