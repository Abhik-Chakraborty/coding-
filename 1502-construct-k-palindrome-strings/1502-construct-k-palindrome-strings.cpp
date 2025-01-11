class Solution {
public:
    bool canConstruct(string s, int k) {
        if (k > s.length()) {
            return false;
    }
        unordered_map<char, int> freqMap;


        for (int i = 0; i < s.length(); i++) {
            freqMap[s[i]]++;
        }

        int oddCount = 0;
        for (auto& it : freqMap) {
            if (it.second % 2 != 0) {
                oddCount++;
            }
        }

        if (oddCount <= k) {
            return true;
        }

        return false;
    }
};