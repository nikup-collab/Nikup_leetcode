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
    
        //iterative way
        int level=0;
        if(root==NULL) return 0;
        queue<TreeNode *>q;
        q.push(root);
        //till q is not empty
        
        while(!q.empty()){
            
            vector<int>vect;
            int size=q.size();
            
            for(int i=0;i<size;i++){
                TreeNode *temp=q.front();
                q.pop();
                
                if(temp->left!=NULL) q.push(temp->left);
                vect.push_back(temp->val);
                if(temp->right!=NULL) q.push(temp->right);
            }
            level++;
        }
        return level;
        
    }
};