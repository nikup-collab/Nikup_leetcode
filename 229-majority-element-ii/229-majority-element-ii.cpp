#include<bits/stdc++.h>
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       unordered_map<int,int>m;
        vector<int> vect;
        
        for(int i=0;i<nums.size(); i++){
            m[nums[i]]++;
            
        }
        int k= nums.size()/3;
        
        for(auto v: m){
            if(v.second>k) vect.push_back(v.first);
        }
        
        return vect;
        
    }
};