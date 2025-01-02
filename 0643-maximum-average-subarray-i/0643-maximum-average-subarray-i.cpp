class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double avg = 0;
        int sum = 0;
        double maxAvg = INT_MIN;
        for(int i = 0; i < k; i++){
            sum += nums[i];
        }
        maxAvg = sum / (double)k;

        for (int i = k; i < nums.size(); i++) {
            sum += nums[i] - nums[i - k]; 
            avg = sum / (double)k;
            maxAvg = max(maxAvg, avg);
        }
        return maxAvg;
    }
};