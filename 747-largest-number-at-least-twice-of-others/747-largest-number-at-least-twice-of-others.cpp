#include<bits/stdc++.h>
class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int m=*max_element(nums.begin(), nums.end());
        int ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==m){
                ans=i;
                continue;
            }
            if(nums[i]*2>m) return -1;
        }
        
     return ans;   
    }
};