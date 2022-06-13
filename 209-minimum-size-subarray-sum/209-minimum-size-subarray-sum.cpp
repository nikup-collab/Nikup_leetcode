#include<bits/stdc++.h>
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
         int ans = INT_MAX;
        // for(int i=0;i<nums.size();i++){
        //     int sum=0;
        //     for(int j=i;j<nums.size();j++){
        //          sum=sum+nums[j];
        //         if(sum>=target){
        //             ans=min(ans,j-i+1);
        //         }
        //     }
        // }
        // if(ans<INT_MAX) return ans;
        // else return 0;
        //prefixsum approach
        
        int pf[nums.size()+1];
        pf[0]=0;
        
        for(int i=1;i<=nums.size();i++)
            pf[i]=pf[i-1]+nums[i-1];
        
        for(int i=0;i<nums.size();i++){
            int sum=0;
            for(int j=i+1;j<=nums.size();j++){
                sum=pf[j]-pf[i];
                if(sum>=target)
                    ans=min(ans,j-i);
            }
        }
         if(ans<INT_MAX) return ans;
         else return 0;
        //prefixsum approach
    }
};