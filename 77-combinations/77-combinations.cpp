#include<bits/stdc++.h>
class Solution {
public:
    void findcombination(int idx, vector<int> &nums, vector<vector<int>> &ans, vector<int> &ds, int k){
        if(idx==nums.size()){
            if(ds.size()==k){
                ans.push_back(ds);
            
            }
            return;
        }
        ds.push_back(nums[idx]);
        findcombination(idx+1,nums,ans,ds,k);
        ds.pop_back();
         findcombination(idx+1,nums,ans,ds,k);
    }
    
    
    
    vector<vector<int>> combine(int n, int k) {
        vector<int> nums;
        for(int i=1;i<=n;i++) nums.push_back(i);
        //2 d array to store result
        vector<vector<int>> ans;
        //vectore to store combination
        vector<int> ds;
        findcombination(0, nums,ans,ds,k);
        return ans;
    }
};