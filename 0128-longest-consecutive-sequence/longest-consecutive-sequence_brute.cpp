#include<bits/stdc++.h>
using namespace std;

bool linearSearch(int arr[], int num, int n){
    for(int i = 0; i < n; i++){
        if(arr[i] == num){
            return true;
        }
    }
    return false;

}


int longestConsecutiveSequence(int arr[], int n){

    int longest = 1;
    for(int i = 0; i < n; i++){
        int x = arr[i];
        int count = 1;

        while(linearSearch(arr, x + 1, n) == true){
            x += 1;
            count += 1;
        }

        longest = max(longest, count);
    }
    return longest;
}



int main() {
    int arr[] = {100, 4, 200, 1, 3, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans = longestConsecutiveSequence(arr, n);
    cout<<"Longest Consecutive Sequence is : "<<ans;


    return 0;
}