#include<bits/stdc++.h>
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
      map<int,int> m;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                m[nums[i]]++;
            }
        }
        int k=1;
        for(auto v : m){
            if(v.first == k)
                k++;
            else
                return k;
        }
        return k;
    }
};