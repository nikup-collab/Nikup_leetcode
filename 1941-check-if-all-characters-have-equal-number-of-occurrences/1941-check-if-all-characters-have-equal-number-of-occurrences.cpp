#include<bits/stdc++.h>
class Solution {
public:
    bool areOccurrencesEqual(string s) {
       unordered_map<char,int> m;
        
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        
        int cnt=m[s[0]];
        
        for(auto v: m){
            if(cnt!=v.second) return false;
        }
        return true;
    }
};