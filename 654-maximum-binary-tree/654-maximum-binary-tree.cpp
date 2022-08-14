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
    TreeNode * helper(vector<int> &nums,int start, int end){
        if(start>end) return nullptr;
        int maxi=INT_MIN;
        int k=0;
        for(int i=start;i<=end; i++){
            if(nums[i] >maxi){
                maxi=nums[i];
                k=i;
            }
        }
        TreeNode *temp = new TreeNode(nums[k]);
        temp->left = helper(nums, start, k-1);
        temp->right = helper(nums, k+1, end);
        
        return temp;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
      
        
        
        return helper(nums,0, nums.size()-1);
        
    }
    
};