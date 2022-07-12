class Solution {
public:
    int scoreOfParentheses(string s) {
        
        int score=0;
        stack<int>stack;
        
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                
             stack.push(score);
                score=0;
            }
            
            else{
               score=stack.top()+max(2*score,1);
                stack.pop();
            }
        }
        return score;
        
    }
};