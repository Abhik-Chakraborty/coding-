/**
 * Given an integer array arr, find the contiguous subarray (containing at least one number) which
has the largest sum and returns its sum and prints the subarray.


  * Example 1:
Input:
 arr = [-2,1,-3,4,-1,2,1,-5,4] 

Output:
 6 

Explanation:
 [4,-1,2,1] has the largest sum = 6. 

Examples 2:
Input:
 arr = [1] 

Output:
 1 
 */

#include<iostream>
using namespace std;

int maxSubArray(int arr[], int n){
    int maxi = INT8_MIN;
    for(int i = 0; i < n; i++){
        int sum = 0;    
        for(int j = i; j < n; j++){
            sum += arr[j];

            maxi = max(maxi, sum);
        }
    }
    return maxi;

}



int main() {
    int arr[] = {-2, -3, 4, -1, -2, 5, 1, -3};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Maximum subarray whose sum is equal to is : "<<maxSubArray(arr, n);
    return 0;
}


/**
 * Time Complexity: O(N2), where N = size of the array.
Reason: We are using three nested loops, each running approximately N times.

Space Complexity: O(1) as we are not using any extra space.
 */