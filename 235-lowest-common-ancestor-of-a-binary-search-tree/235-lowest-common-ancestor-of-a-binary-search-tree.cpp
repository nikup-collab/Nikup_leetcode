/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
       // if root->val is equal to p or q root will be lca 
        if(root->val == p->val || root->val == q->val) return root;
        
        //if they are on different side root will be the answer
        if(root->val > p->val && root->val < q->val ) return root;
        if(root->val > q->val && root->val < p->val) return root;
        
        //if they are on same side
        if(root-> val > p->val && root->val > q->val)
            return lowestCommonAncestor(root->left,p,q);
        else
            return lowestCommonAncestor(root->right,p,q);
        
        return NULL;
    }
};