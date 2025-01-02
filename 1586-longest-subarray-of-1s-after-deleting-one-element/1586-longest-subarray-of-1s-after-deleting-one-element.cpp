class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxLength = 0;
        int count = 0;
        int i = 0;
        for(int j = i; j < nums.size(); j++){
            if(nums[j] == 0){
                count++;
            }
             while(count > 1){
                if(nums[i] == 0){
                    count--;
                }
                i++;
            }
            maxLength = max(maxLength, j - i);    
        }
        if(maxLength == nums.size()){
            return nums.size() - 1;
        }
        else{
            return maxLength;
        }


    }
};