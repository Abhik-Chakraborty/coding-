#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;

    while(i >= 0 && j >= 0){
        if(nums2[j] > nums1[i]){
            nums1[k] = nums2[j];
            j--;
        }
        else{
            nums1[k] = nums1[i];
            i--;
        }
        k--;
    }

    while( j >= 0){
        nums1[k] = nums2[j];
        j--;
        k--;
    }
}





int main() {
    vector<int> nums1 = {1, 2, 3, 0, 0, 0}; 
    vector<int> nums2 = {2, 5, 6};
    int m = 3;
    int n = 3;

    merge(nums1, m, nums2, n);

    cout << "Merged array: ";
    for (int num : nums1) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}