#include<bits/stdc++.h>
class Solution {
public:
    int divisorSubstrings(int num, int k) {
        
        string str=to_string(num);
        
        string s;
        int counter=0;
        //fr first window
        
        for(int i=0;i<k;i++){
            s=s+str[i];
        }
        
        if(num% stoi(s)==0) counter=1;
        else counter=0;
        
        for(int i=k;i<str.size();i++){
            s.erase(s.begin());
            
            s=s+str[i];
            if(stoi(s)!=0){
            if(num%stoi(s)==0) counter++;
            }
        }
        
       return counter; 
    }
};