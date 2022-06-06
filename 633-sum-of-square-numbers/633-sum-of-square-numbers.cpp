#include<bits/stdc++.h>
class Solution {
public:
    bool judgeSquareSum(int c) {
       if(c<3) return true;
        long long lo=0, hi=sqrt(c);
        while(lo<=hi){
            
        
        if( (lo*lo)+(hi*hi) == c) return true;
        
        if((lo* lo)+(hi*hi) >c)
            hi--;
        else
            lo++;
        }
        
    return false;
     
    }
};