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
    void findsum(TreeNode *root, int &curr_sum){
        
        if(root==nullptr) return;
        
        findsum(root->right, curr_sum);
        root->val = root->val+ curr_sum;
        curr_sum=root->val;
        findsum(root->left, curr_sum);
    }
    TreeNode* bstToGst(TreeNode* root) {
         if(root==NULL) return nullptr;
        int curr_sum=0;
        
        findsum(root, curr_sum);
        
        return root;
    }
};