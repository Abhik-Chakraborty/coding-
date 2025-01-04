class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int n = s.size();
        vector<int> first(26, -1), last(26, -1);
        set<string> uniquePalindromes;

        for (int i = 0; i < n; ++i) {
            int index = s[i] - 'a';
            if (first[index] == -1) {
                first[index] = i;
            }
            last[index] = i;
        }

        for (int i = 0; i < 26; ++i) {
            if (first[i] != -1 && last[i] > first[i]) {
                unordered_set<char> middleChars;
                for (int j = first[i] + 1; j < last[i]; ++j) {
                    middleChars.insert(s[j]);
                }
                for (char middle : middleChars) {
                    uniquePalindromes.insert(string(1, 'a' + i) + middle + string(1, 'a' + i));
                }
            }
        }

        return uniquePalindromes.size();
    }
};