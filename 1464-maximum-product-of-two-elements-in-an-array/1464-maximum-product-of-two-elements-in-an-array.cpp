#include<bits/stdc++.h>
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        int a=nums.size()-1;
        int b=nums.size()-2;
        
        int ans=(nums[a]-1)*(nums[b]-1);
        return ans;
    }
};