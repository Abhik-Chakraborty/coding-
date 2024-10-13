#include<iostream>
using namespace std;

int count(int arr[], int n, int x) {
	    // code here
	    int count = 0; 
	    for(int i = 0; i < n; i++){
	        if(arr[i] == x){
	            count++;
	        }
	    }
	    return count;
}

int main () {
    int arr[] = {1, 1, 2, 2, 2, 2, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 2;

    cout<<count(arr, n, x);

    return 0;
}