#include<bits/stdc++.h>
class Solution {
public:
    string customSortString(string order, string s) {
        
        unordered_map<char,int> m;
                unordered_map<char,int> k;
        string ans;
        for(int i=0; i<s.size(); i++){
            m[s[i]]++;
        }
        
        /*creating a hash map to check the order of string in the ans and concatenate them according to peroblem */
        
        for(int i=0; i<order.size(); i++){
            
                if(m.find(order[i]) != m.end()){
                    while(m[order[i]]!=0){
                        ans=ans+order[i];
                        m[order[i]]--;
                    }
                        
                    
                }
            
        }
        
        for(int i=0;i<ans.size();i++){
            k[ans[i]]++;
        }
        
        for(int i=0;i<s.size();i++){
            if(k.find(s[i]) == k.end()) ans=ans+s[i];
        }
       
        return ans;
    }
};