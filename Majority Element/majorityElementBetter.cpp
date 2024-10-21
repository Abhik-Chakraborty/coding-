/**
 * This better approach 
 * Time Complexity: O(N*logN) + O(N), where N = size of the given array.
    Reason: We are using a map data structure. Insertion in the map takes logN time. And we are doing it for N elements. 
    So, it results in the first term O(N*logN). The second O(N) is for checking which element occurs more than floor(N/2) times. 
    If we use unordered_map instead, the first term will be O(N) for the best and average case and for the worst case, it will be O(N2).

 *  Space Complexity: O(N) as we are using a map data structure.
 */

#include<bits/stdc++.h>
using namespace std;


int majorityElement(int arr[], int n){
    map<int, int> mpp;

    for(int i = 0; i < n; i++){
        mpp[arr[i]]++;
    }

    for(auto it : mpp) {
        if(it.second > (n/2)){
            return it.first;
        }
    }

    return -1;

}



int main () {

    int arr[] = {3,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"The majority element is "<<majorityElement(arr, n);
    return 0;
}