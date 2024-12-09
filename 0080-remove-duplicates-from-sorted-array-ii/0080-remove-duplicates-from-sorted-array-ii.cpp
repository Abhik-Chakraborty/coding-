class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 1;
        int i = 0;
        for(int j = i + 1; j < nums.size(); j++){
            if(nums[i] == nums[j]){
                count++;
            }
            else{
                count = 1;
            }
            if(count <= 2){
                i++;
                nums[i] = nums[j];
            }
        }
        return i + 1;
    }
};