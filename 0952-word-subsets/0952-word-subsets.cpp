class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        unordered_map<char, int> requiredFreq;

        for (int i = 0; i < words2.size(); i++) {
            string word = words2[i];
            unordered_map<char, int> tempFreq;

            for (int j = 0; j < word.length(); j++) {
                char c = word[j];
                tempFreq[c]++;
            }

            for (unordered_map<char, int>::iterator it = tempFreq.begin(); it != tempFreq.end(); ++it) {
                char c = it->first;
                int count = it->second;
                if (requiredFreq.find(c) == requiredFreq.end()) {
                    requiredFreq[c] = count;
                } else {
                    requiredFreq[c] = max(requiredFreq[c], count);
                }
            }
        }

        vector<string> result;
        for (int i = 0; i < words1.size(); i++) {
            string word = words1[i];
            unordered_map<char, int> wordFreq;

            for (int j = 0; j < word.length(); j++) {
                char c = word[j];
                wordFreq[c]++;
            }

    
            bool isUniversal = true;
            for (unordered_map<char, int>::iterator it = requiredFreq.begin(); it != requiredFreq.end(); ++it) {
                char c = it->first;
                int requiredCount = it->second;
                if (wordFreq.find(c) == wordFreq.end() || wordFreq[c] < requiredCount) {
                    isUniversal = false;
                    break;
                }
            }

            if (isUniversal) {
                result.push_back(word);
            }
        }

        return result;
    }
};