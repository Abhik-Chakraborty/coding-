class Solution {
public:
    int minSubArrayLen(int target, vector<int>& arr) {
        int left = 0; 
        int sum = 0; 
        int minLen = INT_MAX;
        int n = arr.size();

        for(int right = 0; right < n; right++){
            sum += arr[right];


            while(sum >= target){
                minLen = min(minLen, right - left + 1);
                sum -= arr[left];
                left++;
            }
        }

        if (minLen == INT_MAX) {
            return 0;
        }

        return minLen;        
    }
};