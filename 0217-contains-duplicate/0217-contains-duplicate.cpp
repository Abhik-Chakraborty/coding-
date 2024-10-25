class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        //using set 

        unordered_set<int> set;

        for(int i = 0; i < n; i++){
            set.insert(nums[i]);
        }
        if(set.size() < nums.size()){
            return true;
        }
        return false;
        
    }
};