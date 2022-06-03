#include<bits/stdc++.h>
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
       //creating result to store answwr
        vector<int> res;
        
        //creati g hashmap to store frequencies
        map<int,int>m;
        
    //stor efrequencies of number
        for(int i=0;i<nums.size();i++)
            m[nums[i]]++;
        
        for(int i=0;i<nums.size();i++){
            
            int sum=0;
            
            for(auto v: m){
                if(v.first==nums[i])
                    break;
                sum=sum+v.second;
            }
            res.push_back(sum);
            
        
    }
        return res;
        
        
    }
};