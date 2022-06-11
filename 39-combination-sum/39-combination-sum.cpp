#include<bits/stdc++.h>
class Solution {
public:
    void findcombination(int idx, vector<int> &candidates, int target, vector<vector<int>> &ans, vector<int> &ds){
        if(idx==candidates.size()){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }
           
           
           if(candidates[idx]<=target){
               ds.push_back(candidates[idx]);
               findcombination(idx, candidates, target-candidates[idx], ans,ds);
               ds.pop_back();
           }
             findcombination(idx+1, candidates, target, ans,ds);
    }
    
    
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        //declaring 2d array to store answer
        vector<vector<int>> ans;
        //declaring vector to store array
        
        vector<int> ds;
        findcombination(0, candidates, target, ans, ds);
        return ans;
    }
};