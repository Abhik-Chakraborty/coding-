class Solution {
public:
    int findMax(vector<int> &v) {
        int maxi = INT_MIN;
        int n = v.size();
        for (int i = 0; i < n; i++) {
            maxi = max(maxi, v[i]);
        }
        return maxi;
    }

    long long calculateTotalHours(vector<int> &v, int hourly) {
        long long totalH = 0;
        int n = v.size();
        for (int i = 0; i < n; i++) {
            totalH += (v[i] + hourly - 1) / hourly; 
        }
        return totalH;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int start = 1, end = findMax(piles);
        
        while (start <= end) {
            int mid = (start + end) / 2;
            long long totalH = calculateTotalHours(piles, mid);
            
            if (totalH <= h) {
                end = mid - 1; 
            } else {
                start = mid + 1; 
            }
        }
        
        return start; 
    }

};