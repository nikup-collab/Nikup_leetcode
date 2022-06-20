#include<bits/stdc++.h>

class Solution {
public:
    int countElements(vector<int>& nums) {
        map<int,int> m;
        
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        
        int count=0;
        vector<int> vect;
        for(auto v : m){
            vect.push_back(v.second);
        }
        for(int i=1;i<vect.size()-1;i++) count = count+vect[i];
        
        return count;
        
    }
};