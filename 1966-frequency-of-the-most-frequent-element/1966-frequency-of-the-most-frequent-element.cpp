class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        long long total_sum = 0;
        int left = 0;
        int max_freq = 0;
        int n = nums.size();

        for (int right = 0; right < n; ++right) {
            total_sum += nums[right];
            while ((long long)nums[right] * (right - left + 1) - total_sum > k) {
                total_sum -= nums[left];
                ++left;
            }
            max_freq = max(max_freq, right - left + 1);
        }

        return max_freq;
    }
};