#include<bits/stdc++.h>
class Solution {
public:
    int findtri(int n, unordered_map<int,int> &lookup){
        //base case
        if(n==0) return 0;
        if(n==1 || n==2) return 1;
        
        //if it look first time solve it
        if(lookup.find(n) == lookup.end()){
            lookup[n]=findtri(n-1, lookup) + findtri(n-2, lookup) + findtri(n-3,lookup);
        }
        
        return lookup[n];
    }
    
    
    
    
    
    
    
    int tribonacci(int n) {
        
        //declare map to check pre calculated valures
        unordered_map<int,int> lookup;
        
        return findtri(n, lookup);
        
    }
};