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
    vector<int> rightSideView(TreeNode* root) {
        
        vector<int>vect;
        if(root==NULL) return vect;
        queue<TreeNode *>q;
        q.push(root);
        int level=0;
        
        while(!q.empty()){
            
            
            int size=q.size();
            for(int i=0;i<size;i++){
                
                TreeNode *temp=q.front();
                q.pop();
                
            if(temp->right!=NULL) q.push(temp->right);
                if(vect.size()==level)  vect.push_back(temp->val);
                if(temp->left!=NULL) q.push(temp->left);
            }
            level++;
        }
        
        return vect;
        
    }
};