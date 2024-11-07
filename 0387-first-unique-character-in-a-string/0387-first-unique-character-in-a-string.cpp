class Solution {
public:
    int firstUniqChar(string s) {
        int returnIndex;
        for(int i = 0; i < s.size(); i++){
            bool isUnique = true;
            for(int j = 0; j < s.size(); j++){
                if(s[i] == s[j] && i != j){
                    isUnique = false;
                    break;
                }
            }
            if(isUnique){
                return i;
            }
        }
        return -1;

    }
};