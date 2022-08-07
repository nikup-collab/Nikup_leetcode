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
        int max=INT_MIN;
        int sum=0;
        int level=0, lev=0;
        queue<TreeNode *>q;
        q.push(root);
        
        while(!q.empty()){
            
            
            int size=q.size();
            for(int i=0;i<size;i++){
                
                TreeNode * temp=q.front();
                q.pop();
                
                if(temp->left!=NULL) q.push(temp->left);
                sum+=temp->val;
                if(temp->right!=NULL) q.push(temp->right);
            }
            lev++;
            if(sum>max){
              max=sum;
                level=lev;
            } 
            sum=0;
        }
        return level;
    }
};