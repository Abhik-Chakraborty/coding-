#include <iostream>
#include <vector>
using namespace std;

int singleNonDuplicate(vector<int>& nums) {
    int left = 0;
    int right = nums.size() - 1;

    while (left < right) {
        int mid = left + (right - left) / 2;

        // Check if mid is even or odd
        if (mid % 2 == 0) {
            if (nums[mid] == nums[mid + 1]) {
                left = mid + 2; 
            } else {
                right = mid; 
            }
        } else { // mid is odd
            if (nums[mid] == nums[mid - 1]) {
                left = mid + 1; 
            } else {
                right = mid; 
            }
        }
    }

    return nums[left]; 
}

int main() {
    vector<int> nums = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    cout << "The single element is: " << singleNonDuplicate(nums) << endl;
    return 0;
}
