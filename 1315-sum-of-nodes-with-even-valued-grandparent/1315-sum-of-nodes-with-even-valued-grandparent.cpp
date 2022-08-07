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
    void help(int &sum, TreeNode * root){
        int l_sum=0, r_sum=0;
        if(root==NULL) return;
        
        if(root->val%2==0){
             if(root->left!=NULL){
                 if(root->left->left!=NULL) l_sum+= root->left->left->val;
                 
                 if(root->left->right!=NULL) l_sum+=root->left->right->val;
             }
            
             if(root->right!=NULL){
                 if(root->right->left!=NULL) r_sum+= root->right->left->val;
                 
                 if(root->right->right!=NULL) r_sum+=root->right->right->val;
             }
            
            sum+=l_sum+ r_sum;
        }
        
        help(sum, root->left);
        help(sum,root->right);
    }
    
    int sumEvenGrandparent(TreeNode* root) {
        if(root==NULL) return 0;
        int sum=0;
        help(sum,root);
        
        return sum;
    }
};