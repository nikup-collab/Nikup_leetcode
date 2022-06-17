#include<bits/stdc++.h>
class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int>m;
        
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        
        int cnt=nums.size()/2;
        
        for(auto v: m){
            if(v.second==cnt)
                return v.first;
        }
        return -1;
    }
};