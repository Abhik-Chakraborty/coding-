class Solution {
public:
    bool rotateString(string s, string goal) {
    // If the lengths of the strings don't match, it's impossible
    if (s.length() != goal.length()) {
        return false;
    }
    
    // Concatenate s with itself and check if goal is a substring
    string doubled_s = s + s;
    
    // Check if goal is a substring of doubled_s
    return doubled_s.find(goal) != string::npos;
}
};