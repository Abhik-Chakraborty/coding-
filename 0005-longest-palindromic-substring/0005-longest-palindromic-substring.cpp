class Solution {
public:
    
    int expandAroundCenter(const string& s, int left, int right) {
        
        while (left >= 0 && right < s.length() && s[left] == s[right]) {
            left--;
            right++;
        }
        // Return the length of the palindrome
        return right - left - 1;
    }
    
    string longestPalindrome(string s) {
        if (s.empty()) return "";
        
        int start = 0, end = 0;  // Variables to track the start and end of the longest palindrome
        
        for (int i = 0; i < s.length(); i++) {
            // 1st case - Palindrome centered at a single character (odd-length palindrome)
            int len1 = expandAroundCenter(s, i, i);
            // 2nd case -  Palindrome centered between two characters (even-length palindrome)
            int len2 = expandAroundCenter(s, i, i + 1);
            
            // Get the maximum length of the palindrome found
            int len = max(len1, len2);
            
            // Update start and end if the new palindrome is longer than the current longest
            if (len > end - start) {
                start = i - (len - 1) / 2;
                end = i + len / 2;
            }
        }
        // Return the longest palindrome substring
        return s.substr(start, end - start + 1);
    }
};
