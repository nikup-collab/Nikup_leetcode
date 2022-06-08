#include<bits/stdc++.h>
class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size()==0) return 0;
        int n=haystack.size();
        int m=needle.size();
        
        //brute force
        for(int i=0;i<=n-m;i++){
        int j=0;
        while(j<m &&needle[j]==haystack[i+j]) j++;
        
        if(j==m) return i;
        }
        return -1;
    }
};