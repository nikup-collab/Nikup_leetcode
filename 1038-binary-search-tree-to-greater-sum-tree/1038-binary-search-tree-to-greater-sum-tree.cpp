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
    vector<int> vect;
    unordered_map<int,int>mpp;
    void help(TreeNode *root){
        
        if(root==NULL) return;
        
        help(root->left);
        vect.push_back(root->val);
        
        help(root->right);
    }
    TreeNode *constr(TreeNode *root, vector<int> &pf){
        if(root==NULL) return NULL;
        int i =mpp[root->val];
        root->val= pf[vect.size()]-pf[i];
        
        constr(root->left,pf);
        constr(root->right,pf);
        
        return root;
    }
    TreeNode* bstToGst(TreeNode* root) {
        
        help(root);
        int n=vect.size();
        vector<int>pf(n+1,0);
        
        for(int i=0;i<n;i++) mpp[vect[i]]=i;
        
        for(int i=1;i<=n;i++){
            pf[i]=pf[i-1]+ vect[i-1];
        }
        
        return constr(root ,pf);
        
    }
};