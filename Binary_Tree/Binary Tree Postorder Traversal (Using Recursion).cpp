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
    vector<int> post_traversal (TreeNode* root, vector<int>& v){
        if(!root) return v;
        post_traversal(root->left,v);
        post_traversal (root->right,v);
        v.push_back(root->val);
        return v;
    }
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>v;
        post_traversal(root,v);
        return v;
    }
};