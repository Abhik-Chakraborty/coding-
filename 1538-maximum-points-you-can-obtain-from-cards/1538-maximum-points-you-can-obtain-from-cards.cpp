class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int totalSum = accumulate(cardPoints.begin(), cardPoints.end(), 0);

        if (k == n) return totalSum;

        int windowSize = n - k;

        int minSubarraySum = 0;
        for (int i = 0; i < windowSize; i++) {
            minSubarraySum += cardPoints[i];
        }

        int currentSum = minSubarraySum;
        for (int i = windowSize; i < n; i++) {
            currentSum += cardPoints[i] - cardPoints[i - windowSize];
            minSubarraySum = min(minSubarraySum, currentSum);
        }
        return totalSum - minSubarraySum;
    }
};