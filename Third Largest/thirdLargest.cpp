#include<iostream>
using namespace std;

int thirdLargest(int arr[], int n) {
        // Your code here
        // int n = arr.size();
        int largest = -999;
        int secondLargest = -9999;
        int thirdLargest = -99999;
        
        if(n < 3){
            return -1;
        }
        
        for(int i = 0; i < n; i++){
            if(arr[i] > largest){
                thirdLargest = secondLargest;
                secondLargest = largest;
                largest = arr[i];
            }
            else if(arr[i] > secondLargest && arr[i] != largest){
                thirdLargest = secondLargest;
                secondLargest = arr[i];
            }
            else if(arr[i] > thirdLargest && arr[i] != largest && arr[i] != secondLargest){
                thirdLargest = arr[i];
            }
            
        } 
        
        return largest;
    }

    int main () {
        int arr[] = {855, 450, 132, 359, 233, 825, 604, 481, 262, 337, 720, 525, 652, 300, 906, 219, 926, 906, 293, 864, 817, 498, 30, 639, 661};
        int n = sizeof(arr)/sizeof(arr[0]);

        
        cout<<"Third Largest : "<<thirdLargest(arr, n);
    }