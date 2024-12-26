class Solution {
public:
    int atMostK(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        int left = 0, count = 0;

        for (int right = 0; right < nums.size(); ++right) {
            freq[nums[right]]++;
            while (freq.size() > k) {
                freq[nums[left]]--;
                if (freq[nums[left]] == 0) {
                    freq.erase(nums[left]);
                }
                left++;
            }
            count += (right - left + 1);
        }
        return count;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
    //     int count = 0;
    //     for(int i = 0; i < nums.size(); i++){
    //         map<int, int> mpp;
    //         for(int j = i; j < nums.size(); j++){
    //             mpp[nums[j]]++;
    //             if(mpp.size() == k){
    //                 count++;
    //             }
    //             if(mpp.size() > k){
    //                 break;
    //             }
    //         }
    //     }
    //     return count;
    // }
    return atMostK(nums, k) - atMostK(nums, k - 1);
    }
};