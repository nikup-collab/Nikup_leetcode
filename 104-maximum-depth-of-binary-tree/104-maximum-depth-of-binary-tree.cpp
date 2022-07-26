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
    int maxDepth(TreeNode* root) {
        
        int lev=0;
        if(root==NULL) return lev;
        queue<TreeNode*>q;
        q.push(root);
        
        while(!q.empty()){
            
            vector<int>level;
            int size=q.size();
            
            for(int i=0;i<size;i++){
                TreeNode *temp=q.front();
                q.pop();
                if(temp->left!=NULL) q.push(temp->left);
                level.push_back(temp->val);
                if(temp->right!=NULL) q.push(temp->right);
            }
            lev++;
        }
        return lev;
    }
};