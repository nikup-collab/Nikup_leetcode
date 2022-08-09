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
    int sum=0;
    
    void help(TreeNode *root,int high, int low){
        
        if(root==NULL) return;
        
        help(root->left,high,low);
        if(root->val <= high && root->val >=low) sum+= root->val;
        
        help(root->right,high, low);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        help(root, high, low);
        
        return sum;
        
    }
};