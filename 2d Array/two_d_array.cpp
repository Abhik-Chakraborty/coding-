#include <iostream>
using namespace std;

//Linear search in 2d array
bool isFound(int arr[][3], int target, int row,  int col){
    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 3; col++){
            if(arr[row][col] == target) {
                return 1;
            }
        }
    }
    return 0;
}

//row wise sum problem 
void  rowWiseSum(int arr[][3], int row, int column){
    for(int row = 0; row < 3; row++){
        int sum = 0;
        for(int column = 0; column < 3; column++){
            sum += arr[row][column];
        }
        cout << "Sum of row " << row + 1 << ": " << sum << endl;

    }
}

// finding the larget number in the 2d array 
int largest(int arr[][3], int row, int column){
    int largest = INT8_MIN;

    for(int i  = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            if(arr[i][j] > largest){
                largest = arr[i][j];
            }
        }
    }
    return largest;
}



int main () {
    // Declare a 2D array
    int arr[3][3];

    // Taking inputs
    cout<<"Enter the input : "; 
    for(int row = 0; row < 3; row++) {
        for(int col = 0; col < 3; col++) {
            cin >> arr[row][col];
        }
    }

    // Printing all elements of the 2D array
    cout<<"The 2d array is : "<<endl;
    for(int row = 0; row < 3; row++) {
        for(int col = 0; col < 3; col++) {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    //search an element function call
    cout<<"Enter an element : ";
    int target;
    cin >> target;

    if(isFound(arr, target, 3, 3)) {
        cout<<"The element is present ";
    }
    else{
        cout<<"Element is not present ";
    }


    //sum of row wise function call
    cout<<"The row wise sum is : " <<endl;
    rowWiseSum(arr, 3, 3);


    //largest element in 2d array function call
    cout<<"The largest element in the 2d array is : "<<largest(arr, 3, 3);


    return 0;
}
