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
    vector<int>v;
    void helper(TreeNode *r){
        if(r==NULL) return;
        
        helper(r->left);
        v.push_back(r->val);
        helper(r->right);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        
        helper(root1);
        helper(root2);
        
        sort(v.begin(), v.end());
        
        return v;
        
    }
};