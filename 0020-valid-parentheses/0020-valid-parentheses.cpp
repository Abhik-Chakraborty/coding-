class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        for (int i = 0; i < s.size(); i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                st.push(s[i]);
            }
            else{
                if(st.size() == 0) return false;
                char ch = st.top();
                if((s[i] == ')' && ch == '(') || (s[i] == '}' && ch == '{') || (s[i] == ']' && ch == '[')) {
                    st.pop();
                }
                else {
                    return false;
                }
            }
        }
        return st.empty();
    }
};