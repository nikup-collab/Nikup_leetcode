#include<bits/stdc++.h>
class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        unordered_map<int,int>m;
        
        for(int i=0;i<arr.size();i++){
            m[arr[i]]++;
        }
        
        for(auto v: m){
            if(v.second>arr.size()/4) return v.first;
        }
        return -1;
    }
};