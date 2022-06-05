#include<bits/stdc++.h>
class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int d=nums.size()-1;
        int c=nums.size()-2;
        int b=1;
        int a=0;
        
            int pr=((nums[d]*nums[c])-(nums[b]*nums[a]));
        
        return pr;
    }
};