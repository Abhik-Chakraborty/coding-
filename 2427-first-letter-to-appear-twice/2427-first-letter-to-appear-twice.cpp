class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_set<char>seen;

        for(int i = 0; i < s.size(); i++){
            if(seen.count(s[i])){
                return s[i];
            }
            seen.insert(s[i]);
        }
        return -1;
    }
};