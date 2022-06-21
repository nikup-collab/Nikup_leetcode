#include<bits/stdc++.h>
class Solution {
public:
    vector<long long> sumOfThree(long long num) {
       vector<long long> vect;
        long long lo=0, hi=num;
        /* binary search approach */
        while(lo<=hi){
            long long mid=lo+(hi-lo)/2;
            long long sum= (mid-1) +mid+ (mid+1);
            
            if(sum==num){
               vect.push_back(mid-1);
                vect.push_back(mid);
                vect.push_back(mid+1);
            }
            
            if(sum>num) hi=mid-1;
            else lo=mid+1;
        }
        return vect;
    }
};