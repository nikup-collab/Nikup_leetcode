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

void help(TreeNode *root, int level, int horizon, map<int, vector<pair<int,int>>> &freq_mpp){
    
    if(root==NULL) return;
    
    freq_mpp[level].push_back({horizon, root->val});
    
    help(root->left, level-1, horizon+1, freq_mpp);
    help(root->right, level+1, horizon+1, freq_mpp);
}









class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        
        map<int,vector<pair<int,int>>> freq_mpp;
        
        int level=0, horizon=0;
        
        help(root, level , horizon, freq_mpp);
        
        vector<vector<int>> answer;
        
        for(auto v : freq_mpp){
            
            sort(v.second.begin(), v.second.end());
            
            vector<int>vect;
            for(auto it : v.second){
                vect.push_back(it.second);
            }
            answer.push_back(vect);
        }
        
        return answer;
        
        
    }
    
};