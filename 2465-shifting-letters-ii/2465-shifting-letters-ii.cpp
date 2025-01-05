class Solution {
public:
    // char shiftForward(char c) {
    //     if (c == 'z') {
    //         return 'a';
    //     }
    //     return c + 1;
    // }
    // char shiftBackward(char c) {
    //     if (c == 'a') {
    //         return 'z';
    //     }
    //     return c - 1;
    // }
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n = s.size();
        vector<int> diff(n + 1, 0);

        for (auto& shift : shifts) {
            int start = shift[0], end = shift[1], direction = shift[2];
            int val = (direction == 1) ? 1 : -1; 
            diff[start] += val;
            diff[end + 1] -= val;
        }

        // Calculate the net shift using prefix sum
        int netShift = 0;
        for (int i = 0; i < n; ++i) {
            netShift += diff[i];
            // Apply the net shift to character s[i]
            int shift = (netShift % 26 + 26) % 26; // Ensure non-negative shift
            s[i] = 'a' + (s[i] - 'a' + shift) % 26;
        }

        return s;
        }
};