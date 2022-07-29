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
    int countNodes(TreeNode* root) {
        if(root==NULL) return 0;
        
        int sum=0;
        queue<TreeNode *>q;
        
        q.push(root);
        while(!q.empty()){
            vector<int>level;
            
            int size=q.size();
            for(int i=0;i<size;i++){
                
                TreeNode *temp=q.front();
                q.pop();
                
                if(temp->left) q.push(temp->left);
                level.push_back(temp->val);
                if(temp->right) q.push(temp->right);
            }
            sum+=level.size();
        }
        return sum;
    }
};