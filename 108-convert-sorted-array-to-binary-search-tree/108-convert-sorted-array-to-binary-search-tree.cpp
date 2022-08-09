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
    TreeNode* help(vector<int>&nums, int  i, int j){
        
        int mid=(i+j)/2;
        TreeNode *temp = new TreeNode(nums[mid]);
        
        //divide the left subarray and insert in to left 
        if(i<mid) temp->left = help(nums, i, mid-1);
        
        // divide the right subarray and insert into right of temp
        if( mid<j) temp->right= help(nums, mid+1,j);
        
        return temp;
        
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        
        
        return help(nums, 0, nums.size()-1);
    }
};