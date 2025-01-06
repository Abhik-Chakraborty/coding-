class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> ans(boxes.size());
        for(int i = 0, count = 0, moves = 0; i < boxes.size(); i++){
            ans[i] += moves;
            count += boxes[i] - '0';
            moves += count;
        }
        for(int i = boxes.size()-1, count = 0, moves = 0; i>=0; --i){
            ans[i] += moves;
            count += boxes[i] - '0';
            moves += count;
        }
        return ans;
    }
};