#include<bits/stdc++.h>
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        long double sum=0;
        int n= nums.size();
        //calculate fitst window
        for(int i=0;i<k;i++){
            sum=sum+nums[i];
        }
        long double currav=sum/k;
        
        long double  maxav=currav;
        //for other window
        
        for(int i=k;i<n;i++){
            sum+=nums[i]-nums[i-k];
            currav=sum/k;
            
            maxav=max(maxav,currav);
        }
        return maxav;
    }
};