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

    int help(TreeNode *root, int curr_val){
        
        if(root==NULL) return 0;
       
        curr_val = 10* curr_val + root->val;
       // slate.push_back(curr_val);
      if(!root->left and !root->right){
              return  curr_val;
        }

        
         return help(root->left, curr_val) + help(root->right, curr_val);
              
        
        
       // slate.pop_back();
    }
    int sumNumbers(TreeNode* root) {
        
        
       return help(root, 0);
        
        
        
    }
};