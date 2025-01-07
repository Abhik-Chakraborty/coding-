class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> result;
        map<string, bool> wordMap; 

        for (int i = 0; i < words.size(); ++i) {
            bool isSubstring = false;
            
            for (int j = 0; j < words.size(); ++j) {
                if (i == j) continue;
                
                if (words[j].find(words[i]) != string::npos) {
                    isSubstring = true;
                    break;
                }
            }

            if (isSubstring) {
                result.push_back(words[i]);
            }
        }
        
        return result;
    }
};