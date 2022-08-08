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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        
        if(root==NULL){
            return new TreeNode(val);
        }
//         if root->val is smaller than it will implemented into left
        else if(val < root->val)
                root->left = insertIntoBST(root->left, val);
//         if root->val is greatet than root it will implement to left
         else
                root->right = insertIntoBST(root->right, val);
            
            
        
        return root;
    }
};