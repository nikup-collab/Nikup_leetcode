#include<bits/stdc++.h>
class Solution {
public:
        void permute(int idx, vector<int> &nums, set<vector<int>> &ans){
        if(idx==nums.size()){
            ans.insert(nums);
            return;
        }
        
        for(int i=idx; i<nums.size();i++){
            swap(nums[idx],nums[i]);
            permute(idx+1,nums,ans);
            swap(nums[i],nums[idx]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>> ans;
        permute(0,nums,ans);
        
        vector<vector<int>>res;
        
        for(auto it: ans){
            res.push_back(it);
        }
        
        return res;
    }
};