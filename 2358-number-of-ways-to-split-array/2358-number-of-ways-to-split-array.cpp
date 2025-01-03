class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long total_sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            total_sum += nums[i];
        }

        
        long long prefix_sum = 0;
        long long splits = 0;
        for (int i = 0; i < nums.size() - 1; ++i) {
            prefix_sum  += nums[i];  
            long long suffix_sum = total_sum - prefix_sum;  

            if (prefix_sum >= suffix_sum) {
                splits++;
            }
        }
        return splits;
    }
};