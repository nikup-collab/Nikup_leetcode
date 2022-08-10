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
    TreeNode * check(int i, int j){
        if(i>j) return NULL;
        
        int mid=(i+j)/2;
        
        TreeNode *temp =new TreeNode(vect[mid]);
        
       temp->left= check(i, mid-1);
       temp->right= check(mid+1, j);
        
        return temp;
        
    } 
    void help(TreeNode *root){
        
        if(root==NULL) return;
        
        help(root->left);
        vect.push_back(root->val);
        help(root->right);
    }
    TreeNode* balanceBST(TreeNode* root) {
        
        help(root);
        
        return check( 0, vect.size()-1);
    }
};