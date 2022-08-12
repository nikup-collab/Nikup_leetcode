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
    //find the height of binary tree
    int findheight(TreeNode  *root){
        if(root==nullptr) return 0;
        
        return 1 + max(findheight(root->left), findheight(root->right));
    }
    bool isCompleteTree(TreeNode* root) {
        
        int height=findheight(root);
        int level=1;
        vector<int>vect;
        queue<TreeNode *>q;
        q.push(root);
        
        while(!q.empty()){
            
            int size = q.size();
            
            while(size--){
                
                TreeNode *temp = q.front();
                q.pop();
                
                if(level != height-1 && level <  height-1){
                    
                    if(temp->left!=NULL) q.push(temp->left);
                    else return false;
                    
                    if(temp->right!=NULL) q.push(temp->right);
                    else return false;
                }
                else{
                    if(temp->left!=NULL) vect.push_back(temp->val);
                    else vect.push_back(INT_MAX);
                    if(temp->right!=NULL) vect.push_back(temp->val);
                    else vect.push_back(INT_MAX);
                    
                    

                    
                }
            }
            level++;
            for(int i=vect.size()-1; i>0;i--){
                if(vect[i-1]==INT_MAX and vect[i]!=INT_MAX ) return false;
            }
        }
        
        return true;
    }
};