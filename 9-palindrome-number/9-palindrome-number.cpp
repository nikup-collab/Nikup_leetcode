#include<bits/stdc++.h>
class Solution {
public:
    bool isPalindrome(int x) {
        
        string s=to_string(x);
        int start=0;
        int end= s.size()-1;
        while(start<end){
            if(s[start]!=s[end]) return false;
            else{
                start++;
                end--;
            }
        }
        return true;
    }
};