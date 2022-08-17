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
    int count=0;
    void help(TreeNode *root, int targetSum, vector<int> &slate){
        if(root==NULL) return;
        
        //adding the element i slate
        slate.push_back(root->val);
        //intermal sum
        long long isum=0;
        for(int i= slate.size()-1; i>=0;i--){
            
            isum+= slate[i];
            
            if(isum==targetSum) count++;
            
        }
        help(root->left, targetSum, slate);
        help(root->right, targetSum, slate);
        //removing eleemtn from slate
        slate.pop_back();
    }
    int pathSum(TreeNode* root, int targetSum) {
        
        vector<int>slate;
        help(root, targetSum, slate);
        
        return count;
    }
};