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
    long long sum=0;
    int curr_val=0;
    void help(TreeNode *root, vector<int> &slate){
        
        if(root==NULL) return;
       if(slate.size()>0) curr_val= slate[slate.size()-1];
        curr_val = 10* curr_val + root->val;
        slate.push_back(curr_val);
      if(root->left==NULL and root->right==NULL){
              sum += slate[slate.size()-1];
        }

        
        help(root->left, slate);
        help(root->right, slate);
              
        
        
        slate.pop_back();
    }
    int sumNumbers(TreeNode* root) {
        
        vector<int> slate;
        help(root, slate);
        
        return sum;
        
    }
};