#include<bits/stdc++.h>
const int N = 2e4+1;
//int pf[N];
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int pf[N];
        unordered_map<int,int>m;
        
        pf[0]=nums[0];
        int count=0;
        for(int i=1;i<nums.size();i++){
            pf[i]=pf[i-1]+nums[i];
           
            
        }
        
        // for(int i=0;i<nums.size();i++){
        //     m[pf[i]]++;
        // }
        
       
         for(int i=0;i<nums.size();i++){
             if(pf[i]==k) count++;
             
             if(m.find(pf[i]-k)!=m.end()){
                 count+=m[pf[i]-k];
             }
             m[pf[i]]++;
         }
        
        return count;
    }
};