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
    vector<int>vect;
    void help(TreeNode *root){
        if(root==NULL) return;
        help(root->left);
        vect.push_back(root->val);
        help(root->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        if(root==NULL) return vect;
        
        help(root);
        
        return vect;
        
    }
};