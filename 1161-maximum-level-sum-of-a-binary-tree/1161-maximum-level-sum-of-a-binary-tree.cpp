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
    int maxLevelSum(TreeNode* root) {
        
        int ans=INT_MIN, level=0, currlevel=0;
        queue<TreeNode*>q;
        q.push(root);
        
        while(!q.empty()){
            vector<int>levsum;
            
            int size=q.size();
            for(int i=0;i<size;i++){
                
                TreeNode *node=root;
                node=q.front();
                q.pop();
                if(node->left!=NULL) q.push(node->left);
                if(node->right!=NULL) q.push(node->right);
                
                levsum.push_back(node->val);
            }
            currlevel++;
            int sum=0;
            for(int i=0;i<levsum.size();i++){
                sum+=levsum[i];
            }
            if(sum>ans){
                ans=sum;
                level=currlevel;
            }
            
            
        }
        return level;
    }
};