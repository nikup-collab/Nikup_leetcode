#include<bits/stdc++.h>
class Solution {
public:
    void findcombination(int idx,int sum, vector<int> &nums, vector<int> &ds, vector<vector<int>> &ans, int k, int n){
        if(idx==9){
            if(ds.size()==k){
                           if(sum==n){
                ans.push_back(ds);
            } 
            }

            return;
        }
        
        ds.push_back(nums[idx]);
        sum+=nums[idx];
        findcombination(idx+1,sum,nums,ds,ans,k,n);
        ds.pop_back();
        sum-=nums[idx];
        findcombination(idx+1,sum,nums,ds,ans,k,n);
    }
    
    
    
    
    
    
    
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> nums;
        for(int i=1;i<=9;i++) nums.push_back(i);
        
        //2d array to store answer
        vector<vector<int>> ans;
        //array to store combination
        
        vector<int> ds;
        findcombination(0,0,nums,ds,ans,k,n);
        return ans;
    }
};