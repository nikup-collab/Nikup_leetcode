class Solution {
public:
    int minAddToMakeValid(string s) {
       stack<char>stack;
        int ans=0;
        for(int i=0;i<s.size();i++){
            
            if(s[i]=='(') stack.push(s[i]);
            else{
                if(stack.empty()==true) ans++;
                else if(stack.top()=='(' && s[i]==')') stack.pop();
            }
        }
        
         ans+=stack.size();
        
        return ans;

    }
};