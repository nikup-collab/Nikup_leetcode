#include<bits/stdc++.h>
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
       int n = nums.size();
        long long pf[n+1];
        
        pf[0]=0;
        
        for(int i=1;i<=n;i++){
            pf[i]=pf[i-1]+nums[i-1];
            
        }
        
        for(int i=0;i<=n;i++){
            if(pf[i]>=0) pf[i]=pf[i]%k;
            else{
                pf[i]=(pf[i]- pf[i]*k)%k;
            }
        }
        
        unordered_map<int,int>m;
        
        for(int i=0;i<=n;i++){
            m[pf[i]]++;
        }
        int count=0;
        for(auto v: m){
            int l=v.second;
            count+= (l*(l-1))/2;
            
        }
        return count;
    }
};