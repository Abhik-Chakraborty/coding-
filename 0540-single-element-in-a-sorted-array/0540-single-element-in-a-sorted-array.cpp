class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        // int start = 1;
        // int end = n - 2; 
        if(n == 1){
            return nums[0];
        }
        if(n == 0){
            return -1;
        }
        if(nums[n - 1] != nums[n - 2]){
            return nums[n-1];
        }
        if(nums[0] != nums[1]){
            return nums[0];
        }

        for(int i  = 1; i < n -1; i++){
            if(nums[i] != nums[i+1] && nums[i] != nums[i-1]){
                return nums[i];
            }
        }


        return -1;
        
    }
};