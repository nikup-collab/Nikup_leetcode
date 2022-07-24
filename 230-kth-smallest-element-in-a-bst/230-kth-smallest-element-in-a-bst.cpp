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
    void helper(TreeNode* &root){
        if(root==NULL) return;
        
        vect.push_back(root->val);
        helper(root->left);
        helper(root->right);
    }
    int kthSmallest(TreeNode* root, int k) {
        helper(root);
        
        sort(vect.begin(),vect.end());
        
        int ans;
        ans=vect[k-1];
        
        return ans;
        
        
    }
};