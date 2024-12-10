/**
 * Pattern 2 : Fnding out the longest substring or subarray 
 * arr = [2, 5, 1, 7, 10] ; k = 14
 * objective : Find the longest subarray wiht sum <= 14;
 * output : 3 
 * 
 * BRUTE FORCE METHOD : Generate all subarrays : nested for loops 
 */

#include<bits/stdc++.h>
using namespace std;

int maxSubarray(vector<int> arr, int k){
    int maxLen = 0;
    int sum = 0;
    for(int i = 0; i < arr.size(); i++){
        for(int j = i; j < arr.size(); j++){
            sum += arr[j];
            if(sum <= k){
                maxLen = max(maxLen, j-i+1);
            }
        }
    }
    return maxLen;
}



int main() {
    vector<int> arr = {2, 5, 1, 7, 10};
    int k = 14;

    cout<<maxSubarray(arr, k);
    return 0;
}