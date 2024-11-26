class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int, int> prefixCount;
        int n = nums.size();
        prefixCount[0] = 1;
        int count = 0; 
        int prefixSum = 0;

        for(int i = 0; i < n; i++){
            prefixSum += (nums[i] % 2 == 0) ? 0 : 1;

            if(prefixCount.find(prefixSum - k) != prefixCount.end()){
                count += prefixCount[prefixSum - k];
            }
            prefixCount[prefixSum]++;
        }
        return count;
        
    }
};