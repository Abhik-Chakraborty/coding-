#include <iostream>
#include <vector>
using namespace std;

void convertToWave(vector<int>& arr, int n) {
    for (int i = 0; i < n - 1; i += 2) {
        swap(arr[i], arr[i + 1]);
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();
    
    convertToWave(arr, n);
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}
