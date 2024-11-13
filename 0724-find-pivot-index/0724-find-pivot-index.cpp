class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> startSum (nums.size(), 0);
        vector<int> endSum (nums.size(), 0);
        int sum = 0;

        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
            startSum[i] = sum;
        }
        sum = 0;
        for(int i = nums.size() - 1; i >= 0; i--){
            sum += nums[i];
            endSum[i] = sum;
        }

        for(int i = 0; i < nums.size(); i++){
            if(startSum[i] == endSum[i]){
                return i;
            }
        }
        return -1;
    }
};