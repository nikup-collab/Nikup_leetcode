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
    TreeNode* help( vector<int> &preorder, int prestart, int preend, vector<int> &inorder, int instart, int inend, map<int,int> &mpp){
    
    if(prestart>preend || instart> inend) return NULL;
    
    TreeNode *root = new TreeNode(preorder[prestart]);
    
    int inwhere= mpp[root->val];
    int numsstart = inwhere - instart;
    
    root->left = help(preorder, prestart+1, prestart + numsstart , inorder , instart, inwhere-1, mpp);
    
    root->right = help(preorder, prestart+ numsstart+1, preend, inorder, inwhere+1, inend, mpp);
    
    return root;
}
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        map<int,int> mpp;
        for(int i=0;i<inorder.size();i++) mpp[inorder[i]]=i;
        
        return help(preorder, 0, preorder.size()-1, inorder, 0, inorder.size()-1, mpp);
    }
};



