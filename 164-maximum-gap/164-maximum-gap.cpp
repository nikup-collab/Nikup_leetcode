#include <bits/stdc++.h>
class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n = nums.size();
        int max=0;
        if(n<2)
            return 0;
        else{
            sort(begin(nums), end(nums));
            for(int i=0;i<(n-1);i++){
                int val=nums[i+1]-nums[i];
                if(val>max)
                    max=val;
            }
        }
        return max;
        
    }
};