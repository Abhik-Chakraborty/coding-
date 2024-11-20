class Solution {
public:
    int maxDepth(string s) {
        int currentDepth = 0;
        int maxDepth = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                currentDepth++;
                if (currentDepth > maxDepth) {
                    maxDepth = currentDepth;
                }
            } else if (s[i] == ')') {
                currentDepth--;
            }
        }

        return maxDepth;
    }
};