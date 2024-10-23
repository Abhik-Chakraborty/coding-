class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minimal = INT_MAX;
        int profit = 0;
        int n = prices.size();

        for(int i = 0; i < n; i++){
            minimal = min(minimal, prices[i]);
            profit = max(profit, prices[i] - minimal);
        }

        return profit;
        
    }
};