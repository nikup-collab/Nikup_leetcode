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
    unordered_map<int,int>mpp;
    
    TreeNode *constr(TreeNode *root, vector<int> &pf){
        if(root==NULL) return NULL;
        
        int i = mpp[root->val];
        int sum = pf[vect.size()] - pf[i-1];
        root->val= sum;
        
        constr(root->left, pf);
        constr(root->right, pf);
        
        return root;
    }
    void help(TreeNode *root){
        
        if(root==NULL) return;
        
        help(root->left);
        vect.push_back(root->val);
        help(root->right);
    }
    TreeNode* convertBST(TreeNode* root) {
        help(root);
        int n= vect.size();
        for(int i=0;i<vect.size() ; i++) mpp[vect[i]]=i+1;
        
        vector<int> pf(n+1,0);
        
        for(int i=1;i<=n;i++){
            pf[i]= pf[i-1]+ vect[i-1];
        }
        
        return constr(root, pf);
        
        
    }
};