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
    void helper(TreeNode *&root){
        //dfs
        if(root==NULL) return;
        
        vect.push_back(root->val);
        helper(root->left);
        helper(root->right);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        
        helper(root);
        
        int sum=0;
        
        for(int i=0;i<vect.size();i++){
            
            if(vect[i]>=low && vect[i]<=high) sum+=vect[i];
        }
        return sum;
        
    }
};