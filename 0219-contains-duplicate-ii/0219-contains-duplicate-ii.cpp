class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> numIndexMap;

        for (int i = 0; i < nums.size(); i++) {

            if (numIndexMap.find(nums[i]) != numIndexMap.end()) {
                int lastIndex = numIndexMap[nums[i]];
            if (i - lastIndex <= k) {
                return true;
            }
        }

        numIndexMap[nums[i]] = i;
    }

    return false;
    }
};