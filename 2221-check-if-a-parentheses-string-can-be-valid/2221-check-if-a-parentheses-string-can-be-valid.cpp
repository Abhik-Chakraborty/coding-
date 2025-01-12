class Solution {
public:
    bool canBeValid(string s, string locked) {
        if(s.length() & 1){
            return false;
        }
        const bool leftToRightIsOkay = check(s, locked, true);
        reverse(s.begin(), s.end());
        reverse(locked.begin(), locked.end());
        const bool rightToLeftIsOkay = check(s, locked, false);
        return leftToRightIsOkay && rightToLeftIsOkay;
        
    }
private:
    bool check(const string& s, const string& locked, bool isForward){
        int changeable = 0;
        int left = 0;
        int right = 0;

        for(int i = 0; i < s.length(); ++i){
            const char c = s[i];
            const char lock = locked[i];
            if(lock == '0'){
                ++changeable;
            }
            else if (c == '('){
                ++left;
            }
            else{
                ++right;
            }
            if(isForward && changeable + left - right < 0){
                return false;
            }
            if(!isForward && changeable + right - left < 0){
                return false;
            }
        }
        return true;
    }
};