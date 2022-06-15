#include<bits/stdc++.h>
class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int n= nums.size();
        long long pf[n];
        pf[0]=nums[0];
        
        for(int i=1;i<n;i++){
            pf[i]=pf[i-1]+nums[i];
        }
        
        
        int ans=INT_MAX;
        int idx,res;
        
       for(int i=0;i<n;i++){
           if(i==n-1){
               res=abs((pf[i]/(i+1)));
               if(res<ans){
                   ans=res;
                   idx=i;
               } 
           }
           else{
               res= abs( (pf[i]/(i+1))- ( (pf[n-1]-pf[i])/(n-i-1) ) );
               if(res<ans){
                   ans=res;
                   idx=i;
               } 
           }
           
           
       }
        return idx;
    }
};