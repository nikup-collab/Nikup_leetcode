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
    vector<vector<int>> answer;
    void  help(TreeNode *root, int targetSum , vector<int> &vect){
        if(root==NULL) return;
        vect.push_back(root->val);
        
        if(root->left==NULL and root->right==NULL and targetSum- root->val==0){
            answer.push_back(vect);
        }
        help(root->left, targetSum-root->val, vect);
        help(root->right, targetSum-root->val, vect);
        vect.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int>vect;
        help( root, targetSum, vect);
        return answer;
        
        
    }
};