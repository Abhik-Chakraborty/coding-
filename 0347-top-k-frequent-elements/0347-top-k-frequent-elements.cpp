class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;

        for(int i = 0; i < nums.size(); i++){
            mpp[nums[i]]++;
        }

        vector<pair<int, int>> temp;
        for(auto it : mpp){
            temp.push_back({it.second, it.first});
        }

        sort(temp.rbegin(), temp.rend());

        vector<int> res;
        for(int i = 0; i < k; i++){
            res.push_back(temp[i].second);
        }
        return res;
        
    }
};