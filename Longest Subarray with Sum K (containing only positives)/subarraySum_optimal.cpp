/**
 * Optimal Solution if the array is only having 0s and positives element. 
 * Time Complexity : worst case O(2N) // N + N
 * Space Complexity : O(1) ; no extra space
 */


#include <bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK(int arr[], int k, int n)
{
    int left = 0;
    int right = 0;
    int sum = arr[0];
    int maxLen = 0;

    while (right < n)
    {
        while (sum > k && left <= right)
        {
            sum -= arr[left];
            left++;
        }
        if (sum == k)
        {
            maxLen = max(maxLen, right - left + 1);
        }
        right++;

        if (right < n)
        {
            sum += arr[right];
        }
        
    }
    return maxLen;
}

int main() {
    int arr[] = {1, 2, 3, 1, 1, 1, 1, 4, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;

    int maxSubarray = longestSubarrayWithSumK(arr, k, n);
    cout<<"The longest Subarray with sum K is :  "<<maxSubarray;


    return 0;
}