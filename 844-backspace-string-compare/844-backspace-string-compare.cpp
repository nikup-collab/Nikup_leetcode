class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        stack<char>s1;
        stack<char>s2;
        
        int i=0;
        
        while(i<s.size()){
            
            if(s[i]!='#') s1.push(s[i]);
            else{
                if(!s1.empty()) s1.pop();
            }
            i++;
        }
        
                int j=0;
        
        while(j<t.size()){
            
            if(t[j]!='#') s2.push(t[j]);
            else{
                if(!s2.empty()) s2.pop();
            }
            j++;
        }
        
        string str;
        string str2;
        
        while(s1.size()>0){
            str+=s1.top();
            s1.pop();
        }
        
        while(s2.size()>0){
            str2+=s2.top();
            s2.pop();
        }
          
        
        return str==str2;
        
    }
};