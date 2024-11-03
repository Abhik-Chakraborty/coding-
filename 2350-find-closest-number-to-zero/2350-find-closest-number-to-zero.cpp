class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int minDis = nums[0];

         for (int i = 1; i < nums.size(); i++) {
            if (abs(nums[i]) < abs(minDis)) {
                minDis = nums[i];
            }
            else if (abs(nums[i]) == abs(minDis) && nums[i] > minDis) {
                minDis = nums[i];
            }
        }

        return minDis;
    }
    
};