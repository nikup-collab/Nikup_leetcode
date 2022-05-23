#include<bits/stdc++.h>
#include<cmath>
class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int count=0;
        int sum=0;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            count=0;
            sum=0;
            for(int j=1;j<int(sqrt(nums[i])+1);j++){
                if(nums[i]%j==0){
                    count=count+2;
                    sum=sum+j + (nums[i]/j);
                    if(j==nums[i]/j){
                        sum=sum-j;
                        count--;
                        
                    }
                        
                }
                
            }
            if(count==4)
                ans=ans+ sum;
                
        }
        return ans;
        
    }
};