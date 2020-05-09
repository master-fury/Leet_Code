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
    vector<int> pre_traversal (TreeNode* root, vector<int>& v){
        if(!root) return v;
        v.push_back(root->val);
        pre_traversal(root->left,v);
        pre_traversal(root->right,v);
        return v;
    }
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> v;
        pre_traversal(root,v);
        return v;
    }
};