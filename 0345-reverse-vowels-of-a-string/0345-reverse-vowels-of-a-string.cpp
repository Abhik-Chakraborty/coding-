class Solution {
public:
    bool isVowel(char c) {
    map<char, bool> vowels = {
        {'a', true}, {'e', true}, {'i', true}, {'o', true}, {'u', true},
        {'A', true}, {'E', true}, {'I', true}, {'O', true}, {'U', true}
    };
    return vowels[c];
}
    string reverseVowels(string s) {
        vector<char> vowels;  
    

        for (int i = 0; i < s.size(); i++) {
            if (isVowel(s[i])) {
                vowels.push_back(s[i]);
            }
        }
        
        int vowelIndex = vowels.size() - 1;
        for (int i = 0; i < s.size(); i++) {
            if (isVowel(s[i])) {
                s[i] = vowels[vowelIndex--];  
            }
        }
        
        return s;
    }
};