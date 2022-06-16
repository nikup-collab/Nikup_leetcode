#include<bits/stdc++.h>
class Solution {
public:
    int stair(int n, unordered_map<int,int> &lookup ){
        if(n==0 || n==1) return 1;
        
        //if it look first time calculate it
        if(lookup.find(n)==lookup.end()){
            lookup[n]= stair(n-1,lookup) + stair(n-2,lookup);
        }
        return lookup[n];
    }
    
    
    
    
    int climbStairs(int n) {
       //declared map to check pre calculated valuse
        unordered_map<int,int> lookup;
        
        return stair(n, lookup);
        
    }
};