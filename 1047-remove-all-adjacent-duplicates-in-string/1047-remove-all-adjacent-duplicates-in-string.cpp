class Solution {
public:
    string removeDuplicates(string s) {
        int i=0;
        string str;
        stack<pair<char,int>> stack;
        while(i<s.size()){
        
        if(stack.empty() || stack.top().first!=s[i]){
            
         stack.push({s[i],i});
            i++;
        }
        
        
        
        if(stack.top().first==s[i]){
            
           
            stack.pop();
            i++;
            
        }
        }
        while(stack.size()>0){
            str+=stack.top().first;
            stack.pop();
        }
        reverse(str.begin(),str.end());
        return str;
        
    }
    
};