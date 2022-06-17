#include<bits/stdc++.h>
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> m;
        
        for(int i=0; i<nums.size();i++){
            m[nums[i]]++;
        }
        int sum=0;
        for(auto v : m){
            
            sum=sum+((v.second)*(v.second-1))/2;
        }
        return sum;
    }
};