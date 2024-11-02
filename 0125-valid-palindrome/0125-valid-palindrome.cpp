class Solution {
public:
    bool isPalindrome(string s) {
        string filtered;
        for(int i = 0; i < s.size(); i++){
            if(isalnum(s[i])){
                filtered += tolower(s[i]);
            }
        }


        int i = 0;
        int j = filtered.size() - 1;
        
        while( i < j){
            if(filtered.size() < 1){
                return true;
            }
            if(filtered[i] != filtered[j]){
                return false;
            }
            else{
                i++;
                j--;
            }
        }
        return true;
    }
};