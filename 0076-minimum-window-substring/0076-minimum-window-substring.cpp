class Solution {
public:
    string minWindow(string s, string t) {
        if (t.empty() || s.empty()) return "";

    unordered_map<char, int> t_count, s_count;
    for (int i = 0; i < t.size(); i++) {
        t_count[t[i]]++;
    }

    int required = t_count.size();
    int formed = 0;

    int left = 0, right = 0;
    int minLength = INT_MAX;
    int minStart = 0;

    for (right = 0; right < s.size(); right++) {
        char c = s[right];
        s_count[c]++;

        if (t_count.count(c) && s_count[c] == t_count[c]) {
            formed++;
        }

        while (left <= right && formed == required) {
            char temp = s[left];

            if (right - left + 1 < minLength) {
                minLength = right - left + 1;
                minStart = left;
            }

            s_count[temp]--;
            if (t_count.count(temp) && s_count[temp] < t_count[temp]) {
                formed--;
            }
            left++;
        }
    }

    return minLength == INT_MAX ? "" : s.substr(minStart, minLength);

    }
};