#include<bits/stdc++.h>
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        map<int , int>m;
        vector<int> ans;
        
        for(int i=1;i<=nums.size();i++)
            m[i];
        
        for(int i=0; i<nums.size(); i++){
            m[nums[i]]++;
        }
        
        for(auto v: m){
            if(v.second==0)
                ans.push_back(v.first);
        }
        return ans;
    }
};