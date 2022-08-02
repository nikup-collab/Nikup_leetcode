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
    bool go(TreeNode *root, long long int lval,  long long int rval){
        
        if(root==NULL) return true;
        
        bool lans= go(root->left, lval,root->val);
        bool rans= go(root->right, root->val, rval);
        bool myans= root->val> lval  and root->val<rval;
        
        return lans and rans and myans;
    }
    bool isValidBST(TreeNode* root) {
        
        return go(root, LONG_MIN, LONG_MAX);
    }
    

};