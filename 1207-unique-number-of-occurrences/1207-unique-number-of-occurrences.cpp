#include<bits/stdc++.h>
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> m;
        vector<int> vect;
        
        for(int i=0;i<arr.size();i++){
            m[arr[i]]++;
        }
        
        for(auto v: m){
            vect.push_back(v.second);
        }
        
        sort(vect.begin(), vect.end());
        
        for(int i=0;i<vect.size()-1; i++){
            if(vect[i]==vect[i+1]) return false;
        }
        return true;
    }
};