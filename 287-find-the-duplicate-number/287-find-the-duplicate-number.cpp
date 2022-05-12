#include <bits/stdc++.h>
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int start=0;
        int end=1;
        while(start<end){
            if(nums[start]==nums[end])
                return nums[start];
            else{
                start++;
                end++;
            }
        }
        return -1;
       
        
    }
};