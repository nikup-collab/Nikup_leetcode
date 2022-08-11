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
    void help(TreeNode * root){
        
        if(root==NULL) return;
        help(root->left);
        vect.push_back(root->val);
        help(root->right);
    }
    
    TreeNode *constr(int i, int j){
        
        if(i>j) return NULL;
        
        TreeNode * temp= new TreeNode(vect[i]);
        
        temp->right = constr(i+1, j);
        
        return temp;
    }
    TreeNode* increasingBST(TreeNode* root) {
        help(root);
        
        return constr(0, vect.size()-1);
    }
};