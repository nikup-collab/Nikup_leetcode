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
    int deepestLeavesSum(TreeNode* root) {
        vector<int> vect;
        
        queue<TreeNode*>q;
        q.push(root);
        
        while(!q.empty()){
            
            vector<int>level;
            int size=q.size();
            
            for(int i=0;i<size;i++){
                
                TreeNode *node=q.front();
                q.pop();
                
                
                if(node->left!=NULL) q.push(node->left);
                if(node->right!=NULL) q.push(node->right);
                level.push_back(node->val);
                
            }
            int sum=0;
            for(int i=0;i<level.size();i++) sum+=level[i];
            vect.push_back(sum);
        }
        return vect[vect.size()-1];
    }
};