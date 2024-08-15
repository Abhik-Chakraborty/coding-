class Solution {
public:
    int firstOcc(vector<int>& nums, int target) {
        int start = 0; 
        int end = nums.size() - 1;
        int mid;
        int ans = -1;

        while (start <= end) {
            mid = start + (end - start) / 2;
            if (nums[mid] == target) {
                ans = mid;
                end = mid - 1; 
            } else if (target > nums[mid]) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return ans;
    }
    
    int lastOcc(vector<int>& nums, int target) {
        int start = 0; 
        int end = nums.size() - 1;
        int mid;
        int ans = -1;

        while (start <= end) {
            mid = start + (end - start) / 2;
            if (nums[mid] == target) {
                ans = mid;
                start = mid + 1; 
            } else if (target > nums[mid]) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return ans;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result(2, -1); 
        result[0] = firstOcc(nums, target);
        result[1] = lastOcc(nums, target);
        return result;
    }
};