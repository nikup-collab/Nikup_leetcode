#include<bits/stdc++.h>
class Solution {
public:
    int thirdMax(vector<int>& nums) {
       map<int,int,greater<int>>m;
        int me= *max_element(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        
        int sum=0;
        for(auto v: m){
            sum+=1;
            if(sum==3) return v.first;
        }
        return me;
    }
};