class Solution {
public:
    int minimumLength(string s) {
        int i = 0;
        int j = s.size() - 1;

        while (i < j && s[i] == s[j]) {
            char prefixChar = s[i];
            while (i <= j && s[i] == prefixChar) {
                i++;
            }

            while (i <= j && s[j] == prefixChar) {
                j--;
            }
        }

        return j - i + 1;  
    }
};