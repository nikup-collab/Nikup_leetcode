#include<bits/stdc++.h>
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
       // int a=nums.size()-1;
       // int b=nums.size()-2;
        
        int ans=(nums[nums.size()-1]-1)*(nums[nums.size()-2]-1);
        return ans;
    }
};