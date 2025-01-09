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
    int height(TreeNode* node) {
        if (node == NULL) {
            return 0;
        }

        int leftHeight = height(node->left);
        int rightHeight = height(node->right);
        return 1 + max(leftHeight, rightHeight);
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        if (root == NULL) {
        return 0;
        }

        int maxDiameter = 0;


        queue<TreeNode*> nodeQueue;
        nodeQueue.push(root);

        while (!nodeQueue.empty()) {
            TreeNode* currentNode = nodeQueue.front();
            nodeQueue.pop();


            int leftHeight = height(currentNode->left);
            int rightHeight = height(currentNode->right);


            int currentDiameter = leftHeight + rightHeight;
            maxDiameter = max(maxDiameter, currentDiameter);


            if (currentNode->left) {
                nodeQueue.push(currentNode->left);
            }
            if (currentNode->right) {
                nodeQueue.push(currentNode->right);
            }
        }

        return maxDiameter;
    }
};