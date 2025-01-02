class Solution {
public:
    int maxVowels(string s, int k) {
        map<char, bool> vowels;
        vowels['a'] = true;
        vowels['e'] = true;
        vowels['i'] = true;
        vowels['o'] = true;
        vowels['u'] = true;

        int maxVowelCount = 0;
        int currentVowelCount = 0;
        
        for (int i = 0; i < k; i++) {
            if (vowels.find(s[i]) != vowels.end()) {
                currentVowelCount++;
            }
        }
        maxVowelCount = currentVowelCount;

        for (int i = k; i < s.length(); i++) {
            if (vowels.find(s[i - k]) != vowels.end()) {
                currentVowelCount--;
            }

            if (vowels.find(s[i]) != vowels.end()) {
                currentVowelCount++;
            }

            if (currentVowelCount > maxVowelCount) {
                maxVowelCount = currentVowelCount;
            }
        }

        return maxVowelCount;
    }
};