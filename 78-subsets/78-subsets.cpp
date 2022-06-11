#include<bits/stdc++.h>
class Solution {
public:
    void findset(int idx, vector<int>&nums, vector<vector<int>> &ans, vector<int> &ds){
        if(idx==nums.size()){
            ans.push_back(ds);
            return;
        }
        
        ds.push_back(nums[idx]);
        findset(idx+1,nums,ans,ds);
        ds.pop_back();
        findset(idx+1,nums,ans,ds);
    
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        //declare 2-d array to store answer
        vector<vector<int>> ans;
        
        //declare vector to store particular combination
        vector<int> ds;
        findset(0, nums, ans,ds);
        return ans;
    }
};