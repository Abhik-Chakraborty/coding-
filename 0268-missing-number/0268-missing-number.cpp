class Solution {
public:
    int missingNumber(vector<int>& nums) {
    
    int n = nums.size();
    
    //summation of n natural numbers.
    int sum = (n * (n + 1)) / 2;

    //Summation of all array elements:
    int sum2 = 0;
    for (int i = 0; i < n; i++) {
        sum2 += nums[i];
    }

    int missingNum = sum - sum2;
    return missingNum;
        
    }
};