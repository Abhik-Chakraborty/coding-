class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> freqMap; 

        for(int i = 0; i < n; i++){
            if(nums[i] % 2 == 0){
                freqMap[nums[i]]++;
            }
        }
        int mostFrequent = -1;
        int maxFrequency = 0;

        for(auto it = freqMap.begin(); it != freqMap.end(); ++it){
            int num = it->first;
            int freq = it-> second;

            if(freq > maxFrequency || (freq == maxFrequency && num < mostFrequent )){
                mostFrequent = num;
                maxFrequency = freq;
            }
        }
        return mostFrequent;
    }
};