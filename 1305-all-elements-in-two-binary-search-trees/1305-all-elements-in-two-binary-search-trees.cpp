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
    void help(TreeNode *root, vector<int> &vect){
        
        if(root==NULL) return;
        
        help(root->left, vect);
        vect.push_back(root->val);
        help(root->right,vect);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>v1;
        vector<int>v2;
        help(root1,v1);
        help(root2,v2);
        
        vector<int>answer;
        
        int i=0,j=0;
        while(i<v1.size() and j<v2.size()){
            
            if(v1[i]<v2[j]){
                answer.push_back(v1[i]);
                i++;
            }
            else{
                answer.push_back(v2[j]);
                j++;
            }
        }
        for(int k=i;k<v1.size();k++) answer.push_back(v1[k]);
        for(int l=j;l<v2.size();l++) answer.push_back(v2[l]);
        
        return answer;
    }
};