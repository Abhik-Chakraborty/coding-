#include<bits/stdc++.h>
using namespace std;

vector<int> duplicates(int arr[], int n) {
        // code here
        // int n = arr.size();
        vector<int> result;
        vector<int> count(n, 0);
        
        for(int i = 0; i < n; i++){
            count[arr[i]]++;
        }
        
        for(int i = 0; i < n; i++){
            if(count[i] > 1){
                result.push_back(i);
            }
        }
        if(result.empty()) {
            result.push_back(-1);
        }
        return result;
        
}

int main() {
    int arr[] = {2, 3, 1, 2, 3};
    int n = sizeof(arr)/sizeof(arr[0]);

    vector<int> find_duplicates = duplicates(arr, n);

    for (int i = 0; i < find_duplicates.size(); i++) {
        cout << find_duplicates[i] << " ";
    }

    return 0;
}