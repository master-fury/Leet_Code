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
    vector<int> inorder_traversal(TreeNode* root, vector<int>& v){
        if(!root) return v;
        inorder_traversal(root->left,v);
        v.push_back(root->val);
        inorder_traversal(root->right,v);
        return v;
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>v;
        inorder_traversal(root,v);
        return v;
    }
};