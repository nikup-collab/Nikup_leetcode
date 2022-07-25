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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans; //store answer
        if(root==NULL) return ans;
        //queue to store root
        queue<TreeNode*>q;
        //push first element
        q.push(root);
        
        while(!q.empty()){
            
            vector<int>level;
            int size=q.size();
            
            for(int i=0;i<size;i++){
                //for every element i check whther left node or right node is present or  not in the binary tree
                TreeNode *node=q.front();  //take front element as temperary node
                q.pop();
                if(node->left!=NULL) q.push(node->left);
                if(node->right!=NULL) q.push(node->right);
                level.push_back(node->val);
            }
            ans.push_back(level);
        }
        return ans;
        
    }
};