/**
 * Pattern 2 : Fnding out the longest substring or subarray 
 * arr = [2, 5, 1, 7, 10] ; k = 14
 * objective : Find the longest subarray wiht sum <= 14;
 * output : 3 
 * 
 * Better method : using 2 pointers (left pointer and right pointer)
 */
#include<bits/stdc++.h>
using namespace std;

int maxSubarray(vector<int> arr, int k){
    int sum = 0;
    int maxLen = 0;
    int i = 0;
    int j = 0;
    while(j < arr.size()){
        sum  += arr[j];
        if(sum <= k){
            maxLen = max(maxLen, j - i + 1);
            j++;
        }
        else{
            sum -= arr[i];
            i++;
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