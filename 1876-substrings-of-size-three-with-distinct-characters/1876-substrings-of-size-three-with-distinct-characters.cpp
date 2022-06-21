bool helper(string &str){
    
    unordered_map<char,int>m;
    for(int i=0;i<3;i++) m[str[i]]++;
    
    for(auto v: m){
        if(v.second !=1 ) return false;
    }
    return true;
}

#include<bits/stdc++.h>
class Solution {
public:
    int countGoodSubstrings(string s) {
        
        int n=s.size();
        string str;
        //for first window
        for(int i=0;i<3;i++){
           str+=s[i]; 
        }
        int count=0;
       if( helper(str)==true) count=1;
        else count=0;
        
        
        for(int i=3 ;i<n;i++){
            str.erase(str.begin());
            
            str=str+s[i];
            if(helper(str)==true) count++;
            
        }
        return count;
    }
};