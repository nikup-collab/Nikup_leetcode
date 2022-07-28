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
    vector<int> v;
   void  help(TreeNode *&root){
        if(root==NULL) return;
        help(root->left);
        v.push_back(root->val);
        help(root->right);
        
    }
    bool findTarget(TreeNode* root, int k) {
        help(root);
        if(v.size()<2) return false;
        sort(v.begin(), v.end());
        
        int i=0, j=v.size()-1;
        
        while(i<j){
            
            if(v[i]+v[j]==k) return true;
            
            if(v[i]+v[j]>k) j--;
            else i++;
            
        }
        return false;
        
    }
};