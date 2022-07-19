class Solution {
public:
    string minRemoveToMakeValid(string s) {
        
        stack<pair<char,int>> stack;
        int i=0;
        while(i<s.size()){
            
            if(s[i]=='(') stack.push({s[i],i});
            
            else if(s[i]==')'){
                
                if(stack.empty()){
                    s.erase(s.begin()+i);
                    i--;
                    
                }
                else{
                    stack.pop();
                }
            }
            i++;
            
        }
        
        while(stack.size()>0){
            
            s.erase(s.begin()+ stack.top().second);
            stack.pop();
        }
        
        return s;
        
    }
};