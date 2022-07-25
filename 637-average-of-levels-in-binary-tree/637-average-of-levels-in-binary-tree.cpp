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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>ans; //to store answer
        if(root==NULL) return ans;
        queue<TreeNode *>q;
        q.push(root);
        
        while(!q.empty()){
            
            vector<int>level;
            int size=q.size();
            for(int i=0;i<size;i++){
                
                TreeNode *node=root;
                node=q.front();
                q.pop();
                if(node->left!=NULL) q.push(node->left);
                if(node->right!=NULL) q.push(node->right);
                
                level.push_back(node->val);
            }
            double sum=0, count=0;
            for(int i=0;i<level.size();i++){
                sum+=level[i];
                count++;
            }
            double r=sum/count;
            ans.push_back(r);
        }
        return ans;
    }
};