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
    // void postOrder(TreeNode* root, vector<int>& arr){
    //     if(root == NULL){
    //         return;
    //     }
    //     postOrder(root->left, arr);
    //     postOrder(root->right, arr);
    //     arr.push_back(root->val);
    // }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> arr;
        // postOrder(root, arr);
        if(root == NULL){
            return arr;
        }
        stack<TreeNode*> st;
        TreeNode* curr = root;
        TreeNode* lastVisited = NULL;   
        while(!st.empty() || curr != NULL){
            if(curr != NULL){
                st.push(curr);
                curr = curr->left;
            }
            else{
                TreeNode* temp = st.top();
                if(temp->right != NULL && temp->right != lastVisited){
                    curr = temp->right;
                }
                else{
                    arr.push_back(temp->val);
                    lastVisited = temp;
                    st.pop();
                }
            }
        }
        return arr;
    }
};