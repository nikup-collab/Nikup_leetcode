#include<bits/stdc++.h>
class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s;
        string e;
        for(int i=0;i<word1.size();i++){
            s=s+word1[i];
        }
        
         for(int i=0;i<word2.size();i++){
            e=e+word2[i];
        }
       
        return s==e;
    }
};