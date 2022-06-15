#include<bits/stdc++.h>
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        map<int,int> m;
        
        for(int i =1; i<=3000;i++){
            m[i];
        }
        
        for(int i=0;i<arr.size();i++){
            m[arr[i]]++;
        }
        int count=0;
        
        for(auto v:m){
            if(v.second==0) count++;
            
            if(count==k) return v.first;
        }
        return -1;
    }
};