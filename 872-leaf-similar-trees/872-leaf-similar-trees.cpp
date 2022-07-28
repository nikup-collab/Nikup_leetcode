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
    vector<int>v1;
    vector<int > v2;
    
    void help(TreeNode *&root){
        
        if(root==NULL) return ;
        
        help(root->left);
       if(root->left ==NULL and root->right==NULL) v1.push_back(root->val);
        help(root->right);
    }
    
     void help2(TreeNode *&root){
       // if(root->left==NULL and root->right==NULL) v2.push_back(root->val);
        if(root==NULL) return ;
        
        help2(root->left);
       if(root->left==NULL and root->right==NULL) v2.push_back(root->val);
        help2(root->right);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        help(root1);
        help2(root2);
        
        if(v1.size()!=v2.size()) return false;
        
        for(int i=0;i<v1.size();i++){
            if(v1[i]!=v2[i]) return false;
        }
        return true;
    }
};