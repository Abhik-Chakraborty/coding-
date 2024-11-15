class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size()) return false; 

        unordered_map<char, char> mapST; 
        unordered_map<char, char> mapTS; 

        for (int i = 0; i < s.size(); i++) {
            char sChar = s[i];
            char tChar = t[i];

            if (mapST.count(sChar) && mapST[sChar] != tChar) return false;
            if (mapTS.count(tChar) && mapTS[tChar] != sChar) return false;


            mapST[sChar] = tChar;
            mapTS[tChar] = sChar;
        }

        return true; 
        }
};