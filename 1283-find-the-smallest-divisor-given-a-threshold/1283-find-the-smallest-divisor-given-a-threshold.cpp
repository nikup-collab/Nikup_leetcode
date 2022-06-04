//check if mid is the smallest division

bool check(int num, vector<int> &nums, int a){
    long long  sum=0;
    for(int i=0;i<nums.size();i++){
        sum=sum+ ceil(float(nums[i])/num);
    }
    if(sum<=a) return true;
    else return false;
}

//----------------------------------------------


#include<bits/stdc++.h>
class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        sort(nums.begin(),nums.end());
       long long  lo=1;
        //long longint ans;
        long long  hi=*max_element(nums.begin(),nums.end())+1;
        while(lo<hi){
            long long  mid= lo+(hi-lo)/2;
            if(check(mid,nums,threshold)){
                
                hi=mid;
            }
                
            else
                lo=mid+1;
            
        }
        return lo;
    }
};