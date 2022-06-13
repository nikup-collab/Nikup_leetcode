#include<bits/stdc++.h>
class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int ma=-1;
        int diff;
        
        for(int i=0;i<nums.size()-1;i++){
            int diff=0;
            for(int j=i+1;j<nums.size();j++){
                 if(nums[j]>nums[i]){
                diff=nums[j]-nums[i];
                ma=max(diff, ma);
            }
            }
           
        }
        return ma;
    }
};