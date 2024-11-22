class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int, int> prefixCount;
        int currentSum = 0;
        int count = 0;

        prefixCount[0] = 1;

        for (int i = 0; i < nums.size(); i++) {
            currentSum += nums[i];

            if (prefixCount.find(currentSum - goal) != prefixCount.end()) {
                count += prefixCount[currentSum - goal];
            }

            prefixCount[currentSum]++;
        }

        return count;
    }
};