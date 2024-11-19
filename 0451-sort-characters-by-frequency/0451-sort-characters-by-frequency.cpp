class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freqMap;

        for (char c : s) {
            freqMap[c]++;
        }

        vector<pair<char, int>> freqVec(freqMap.begin(), freqMap.end());

        sort(freqVec.begin(), freqVec.end(), [](pair<char, int>& a, pair<char, int>& b) {
            return a.second > b.second; 
        });

        string result;
        for (auto& p : freqVec) {
            result.append(p.second, p.first);
        }

        return result;
    }
};