class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char, int> magazineCount;

        for(int i = 0; i < magazine.size(); i++){
            magazineCount[magazine[i]]++;
        }

        for(int i = 0; i < ransomNote.size(); i++){
            if(magazineCount[ransomNote[i]] == 0){
                return false;
            }
            magazineCount[ransomNote[i]]--;
        }
        return true;
    }
};