#include<bits/stdc++.h>
class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        unordered_map<int,int>m;
        vector<int> res;
        
        for(int i=0; i<nums.size();i++){
            m[nums[i]]++;
        }
        
        
        for(auto v: m){
            if(v.second==1){
                if(m.find(v.first-1) ==m.end() && m.find(v.first+1) == m.end())
                    res.push_back(v.first);
            }
        }
        return res;
    }
};