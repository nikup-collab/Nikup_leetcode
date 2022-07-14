class Solution {
public:
    string removeDuplicates(string s) {
        int i=0;
        string str;
        stack<char> stack;
        while(i<s.size()){
        
        if(stack.empty() || stack.top()!=s[i]){
            
         stack.push(s[i]);
            i++;
        }
        
        
        
        if(stack.top()==s[i]){
            
           
            stack.pop();
            i++;
            
        }
        }
        while(stack.size()>0){
            str+=stack.top();
            stack.pop();
        }
        reverse(str.begin(),str.end());
        return str;
        
    }
    
};