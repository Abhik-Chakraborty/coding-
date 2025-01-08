class Solution {
private:
    bool isPrefixAndSuffix(const string& str1, const string& str2) {
    int n = str2.size();
    int m = str1.size();
    
    return (n >= m && str2.substr(0, m) == str1 && str2.substr(n - m, m) == str1);
}
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int count = 0;
        int n = words.size();
        
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (isPrefixAndSuffix(words[i], words[j])) {
                    count++;
                }
            }
        }
        
        return count;
    }
};