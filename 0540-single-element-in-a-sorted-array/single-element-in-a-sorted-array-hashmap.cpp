#include<bits/stdc++.h>
using namespace std;

int singleElement(int arr[], int n){
    map<int, int> mpp;

    for(int i = 0; i < n; i++){
        mpp[arr[i]]++;
    }

    for(const auto& pair : mpp){
        if(pair.second == 1){
            return pair.first;
        }
    }

    return -1;
}




int main() {
    int arr[] = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int oneElement = singleElement(arr, n);
    if (oneElement != -1) {
        cout << "The element that appears once is: " << oneElement << endl;
    } else {
        cout << "No element appears exactly once." << endl;
    }
    return 0;
}