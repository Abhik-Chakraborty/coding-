class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.size() == 1){
            return nums[0];
        }

        if(nums.size() == 0){
            return 0;
        }

        int maxPro = nums[0];
        int minPro = nums[0];
        int result = nums[0];

        for(int i = 1; i < nums.size(); i++){
            if(nums[i] < 0){
                swap(maxPro, minPro);
            }

            maxPro = max(nums[i], maxPro * nums[i]);
            minPro = min(nums[i], minPro * nums[i]);

            result = max(result, maxPro);
        }
        return result;
    }
};