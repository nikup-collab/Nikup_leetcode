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
    unordered_map<int,int>mpp;
    
    void help(TreeNode *root){
        
        if(root==NULL) return;
        
        help(root->left);
        if(mpp.find(root->val)==mpp.end()){
            mpp[root->val]=1;
        }
        else mpp[root->val]++;
        
        help(root->right);
    }
    
    
    
    vector<int> findMode(TreeNode* root) {
        vector<int>result;
        if(root==NULL) return result;
        help(root);
        
        vector<pair<int,int>>vect;
        
        for(auto v: mpp){
            vect.push_back({v.second, v.first});
            
            
        }
        
        sort(vect.begin(), vect.end(), greater<pair<int,int>>());
        
        
        if(vect.size()==1) {
            result.push_back(vect[0].second);
            return result;
        }
        result.push_back(vect[0].second);
        for(int i=1;i<vect.size();i++){
             if(vect[i].first != vect[i-1].first) 
                break;
            result.push_back(vect[i].second);
            
           
        }
        
        return result;
    }
};