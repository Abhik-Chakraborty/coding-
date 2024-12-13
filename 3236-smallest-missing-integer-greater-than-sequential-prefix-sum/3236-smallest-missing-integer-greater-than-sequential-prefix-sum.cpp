class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n = nums.size();
        int prefixSum = nums[0];
        int longestPrefixEnd = 0;

        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1] + 1) {
                prefixSum += nums[i];
                longestPrefixEnd = i;
            } else {
                break;
            }
        }

        unordered_set<int> numSet(nums.begin(), nums.end());

        int missing = prefixSum;
        while (numSet.count(missing)) {
            missing++;
        }

        return missing;
    }
};