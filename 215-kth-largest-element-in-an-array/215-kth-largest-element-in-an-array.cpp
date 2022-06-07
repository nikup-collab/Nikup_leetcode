#include<bits/stdc++.h>
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        map<int,int, greater<int>> m;
        
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
            
        }
        int sum=0;
        for(auto v: m){
            sum = sum+v.second;
            if(sum>=k) return v.first;
        }
        return -1;
    }
};