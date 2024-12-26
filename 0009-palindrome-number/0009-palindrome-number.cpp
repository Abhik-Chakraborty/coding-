class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0 || (x % 10 == 0 && x != 0)){
            return false;
        }
        string numStr = to_string(x);

        int i = 0, j = numStr.size() - 1;
            while (i < j) {
                if (numStr[i] != numStr[j]) {
                    return false;
                }
            i++;
            j--;
        }
        return true;
    }
};