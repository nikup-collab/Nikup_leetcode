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
    
            unordered_map<long,int>mpp;
   // find sum of every sub tree
    int findsum(TreeNode *root){
        
        if(root==NULL) return 0;
        long sum = root->val;
        sum+=findsum(root->left);
        sum+=findsum(root->right);
        if(mpp.find(sum)==mpp.end()) mpp[sum]=1;
        else mpp[sum]++;
        return sum;
        
        
    }
    vector<int> findFrequentTreeSum(TreeNode* root) {
        findsum(root);
        int max = 0;
        for(auto v: mpp){
            if(v.second>max){
                max = v.second;
            }
        } 
        vector<int>ans;
        for(auto v: mpp){
            if(v.second==max){
               ans.push_back(v.first);
            }
        }
        return ans;
    }
};