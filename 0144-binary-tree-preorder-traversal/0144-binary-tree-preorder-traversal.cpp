/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    // void preOrder(TreeNode* root, vector<int>& arr){
    //     if(root == NULL){
    //         return;
    //     }
    //     arr.push_back(root->val);
    //     preOrder(root->left,arr);
    //     preOrder(root->right,arr);
    // }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        if(root == NULL){
            return result;
        }
        // preOrder(root, arr);
        // return arr;
        stack<TreeNode*> st;        
        st.push(root);
        while(!st.empty()){
            root = st.top();
            st.pop();
            result.push_back(root -> val);
            if(root -> right != NULL){
                st.push(root -> right);
            }
            if(root -> left != NULL){
                st.push(root -> left);
            }
        }
        return result;
    }
};