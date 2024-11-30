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
    int maxDepth(TreeNode* root, int& res) {
        if (root == NULL) return 0;                         
        int left = maxDepth(root->left, res);
        int right = maxDepth(root->right, res);  
        res = max(res, left + right);
        return max(left, right) + 1;                   
    }

public:
    int diameterOfBinaryTree(TreeNode* root) {
        int res = 0;                           
        maxDepth(root, res);      
        return res;                       
    }
};
