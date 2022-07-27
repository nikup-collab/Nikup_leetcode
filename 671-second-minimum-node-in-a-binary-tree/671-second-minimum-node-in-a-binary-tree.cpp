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
    map<int,int>m;
    void help(TreeNode *&root){
        if(root==NULL) return;
        
        help(root->left);
        m[(root->val)]++;
        help(root->right);
    }
    int findSecondMinimumValue(TreeNode* root) {
        
        help(root);
        // map<int,int>m;
        // for(int i=0;i<v.size();i++){
        //     m[v[i]]++;
        // }
       if(m.size()<2) return -1; 
        int i=0;
        int ans=0;
        for(auto v:m){
            ans=v.first;
            i++;
            if(i==2) break;
        }
        return ans;
        
    }
};