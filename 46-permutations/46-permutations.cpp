class Solution {
public:
    void permute(int idx, vector<int> &nums, vector<vector<int>> &ans){
        if(idx==nums.size()){
            ans.push_back(nums);
            return;
        }
        
        for(int i=idx; i<nums.size();i++){
            swap(nums[idx],nums[i]);
            permute(idx+1,nums,ans);
            swap(nums[i],nums[idx]);
        }
    }
    
    
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        
        permute(0,nums,ans);
        return ans;
        
    }
};