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
    unordered_map<int,int> m;
   // vector<int>v;
    void help(TreeNode *&root){
        
        if(root==NULL) return;
        
        help(root->left);
        m[root->val]++;
        help(root->right);
    }
    bool isUnivalTree(TreeNode* root) {
        help(root);
        
         if(m.size()==1) return true;
        return false;
    }
};