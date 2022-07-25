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
    vector<int>v1;
    vector<int> v2;
    
    //dfs for 1 tree
    void help(TreeNode *root1){
        if(root1==NULL) return;
        
        v1.push_back(root1->val);
        help(root1->left);
        help(root1->right);
    }
    
    //dfs for 2 tree
     void helper(TreeNode *root2){
        if(root2==NULL) return;
        
        v2.push_back(root2->val);
        helper(root2->left);
        helper(root2->right);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        help(root1);
        helper(root2);
        vector<int> res;
        int i=0,j=0;
        int n=v1.size();
        int m=v2.size();
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        
        while(i<n && j<m){
            
            if(v1[i]<v2[j]){
                res.push_back(v1[i]);
                i++;
            }
            else{
                res.push_back(v2[j]);
                j++;
            }
        }
        for(int k=i;k<n;k++) res.push_back(v1[k]);
        for(int l=j;l<m;l++) res.push_back(v2[l]);
        
        return res;
        
    }
};