#include<bits/stdc++.h>
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        vector<int> res;
        int pf[n+1];
        pf[0]=0;
        
        for(int i=1;i<=n;i++){
            pf[i]=pf[i-1]+nums[i-1];
            res.push_back(pf[i]);
        }
        return res;
    }
};