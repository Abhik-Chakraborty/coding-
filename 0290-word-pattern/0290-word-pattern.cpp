class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        string currentWord = "";
        
        for (char ch : s) {
            if (ch == ' ') {
                if (!currentWord.empty()) {
                    words.push_back(currentWord);
                    currentWord = "";  
                }
            } else {
                currentWord += ch;  
            }
        }

        if (!currentWord.empty()) {
            words.push_back(currentWord);
        }

        if (words.size() != pattern.size()) {
            return false;
        }

        unordered_map<char, string> patternToWord;
        unordered_map<string, char> wordToPattern;

        for (int i = 0; i < pattern.size(); ++i) {
            char patChar = pattern[i];
            string currentWord = words[i];

            if (patternToWord.find(patChar) != patternToWord.end()) {
                if (patternToWord[patChar] != currentWord) {
                    return false;
                }
            } else {
                patternToWord[patChar] = currentWord;
            }

            if (wordToPattern.find(currentWord) != wordToPattern.end()) {
                if (wordToPattern[currentWord] != patChar) {
                    return false;
                }
            } else {
                wordToPattern[currentWord] = patChar;
            }
        }

        return true;
    }
};