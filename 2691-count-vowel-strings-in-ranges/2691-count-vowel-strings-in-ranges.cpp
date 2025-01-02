class Solution {
public:
    bool startsAndEndsWithVowel(const string& word) {
        char vowels[] = {'a', 'e', 'i', 'o', 'u'};
        char firstChar = tolower(word[0]);
        char lastChar = tolower(word[word.size() - 1]);

        return (find(begin(vowels), end(vowels), firstChar) != end(vowels)) &&
            (find(begin(vowels), end(vowels), lastChar) != end(vowels));
    }
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n = words.size();
        vector<int> result;

        vector<int> prefixSum(n, 0);


        for (int i = 0; i < n; ++i) {
            if (startsAndEndsWithVowel(words[i])) {
                prefixSum[i] = (i == 0) ? 1 : prefixSum[i - 1] + 1;
            } else {
                prefixSum[i] = (i == 0) ? 0 : prefixSum[i - 1];
            }
        }

        for (int i = 0; i < queries.size(); ++i) {
            int li = queries[i][0], ri = queries[i][1];
            if (li > 0) {
                result.push_back(prefixSum[ri] - prefixSum[li - 1]);
            } else {
                result.push_back(prefixSum[ri]);
            }
        }

        return result;
    }
};