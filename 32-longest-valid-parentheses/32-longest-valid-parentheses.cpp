class Solution {
public:
    int longestValidParentheses(string s) {
        
        //to tack the position of bad parenthesis
        stack<int> stack;
        int n=s.size();
        
        for(int i=0;i<n;i++){
            
            if(s[i]=='(') stack.push(i);
            else{
                
                if(stack.empty() || s[stack.top()]!='(') stack.push(i);
                else stack.pop();
            }
        }
        
        int longest=0;
       if(stack.empty()) return n;
        else{
            int a=n,b=0;
            while(stack.size()>0){
                
                b=stack.top(); stack.pop();
                longest=max(longest,a-b-1);
                a=b;
                
                
            
                
            }
            longest=max(longest,a);
        }
        return longest;
        
    }
};