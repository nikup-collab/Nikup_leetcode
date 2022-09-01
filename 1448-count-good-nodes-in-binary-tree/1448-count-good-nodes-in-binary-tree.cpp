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
    void help(TreeNode *root, int maxi , int &count){
        if(root== NULL) return;
        
        if(root->val > maxi){
            maxi = root->val;
        }
        
        if(maxi==root->val) count++;
        
        help(root->left, maxi, count);
        help(root->right, maxi , count);
    }
    int goodNodes(TreeNode* root) {
        if(root==NULL) return 0;
        
        int maxi= INT_MIN, count=0;
        
        help(root, maxi, count);
        
        return count;
    }
};