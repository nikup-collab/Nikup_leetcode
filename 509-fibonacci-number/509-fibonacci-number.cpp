#include<bits/stdc++.h>
class Solution {
public:
    int dpfib(int n, unordered_map<int,int> &lookup){
        
        //base case
        if(n==0) return 0;
        if(n==1) return 1;
        
        //if subproblem encountered first time calculate it
        if(lookup.find(n) == lookup.end())
            lookup[n]=  dpfib(n-1, lookup) + dpfib(n-2, lookup);
        
        return lookup[n];
    }
    
    
    
    
    int fib(int n) {
        
        //declare map  to store pre calculated valuees
        unordered_map<int,int> lookup;
        
        return dpfib(n,lookup);
        
    }
};