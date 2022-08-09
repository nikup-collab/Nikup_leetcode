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
    
    //inorder traversal
    vector<int>vect;
    int curr=0, maxm=INT_MIN, prev=0;
    void help(TreeNode *root){
        
        if(root==NULL) return;
        
        help(root->left);
        
        // if root->val == prev then curr will be increment
        if(root->val== prev){
            curr++;
        }
        else if(root->val!=prev) curr=1;
        
        // we check maximum with curr
        
        if(curr> maxm){
            vect.clear();    //clear the previous ansewer
            
            vect.push_back(root->val);
            maxm=curr;
        }
        else if(curr==maxm){
            vect.push_back(root->val);
        }
        
        
        

        prev=root->val;
        help(root->right);
    }
    
    
    //finding the mode using hash map
    vector<int> findMode(TreeNode* root) {
        
        if(root==NULL) return vect;
         help(root);
        
        return vect;
    }
};