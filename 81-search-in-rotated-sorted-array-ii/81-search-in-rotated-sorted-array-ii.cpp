#include<bits/stdc++.h>
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        
        //brute force
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target) return true;
        }
        return false;
    }
};