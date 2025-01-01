class Solution {
public:
    int maxScore(string s) {
        int leftZeros = 0;
        int rightOnes = 0;

        for(int i = 0; i < s.size(); i++){
            if(s[i] == '1'){
                rightOnes++;
            }
        }
        int maxScores = 0;

        for(int i = 0; i < s.size()-1; i++){
            if(s[i] == '0'){
                leftZeros++;
            }
            else{
                rightOnes--;
            }
            int scores = leftZeros + rightOnes;
            maxScores = max(maxScores, scores); 
        }
        return maxScores;
    }
};