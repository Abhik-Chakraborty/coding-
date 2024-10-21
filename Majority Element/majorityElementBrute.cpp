/**
 * This is brute force approach
 * two for loops one's nested so O(N^2) the time complexity of course 
 * As of space complexity -> No extra space is being used. 
 */

#include<iostream>
using namespace std;


int majorityElement(int arr[], int n){
    for(int i = 0; i < n; i++){
        int count = 0;

        for(int j = 0; j < n; j++){
            if(arr[j] == arr[i]){
                count++;
            }
        }

        if(count > (n/2)){
            return arr[i];
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