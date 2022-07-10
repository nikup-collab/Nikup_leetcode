bool check(char &c, char&t){
    if(c=='{' && t=='}') return true;
        if(c=='(' && t==')') return true;
        if(c=='[' && t==']') return true;
    return false;
}



class Solution {
public:
    bool isValid(string s) {
        
        stack<char>stack;
        int i=0;
        while(i<s.size()){
            
            if(s[i]=='(' || s[i]=='{' || s[i]=='[') stack.push(s[i]);
            
            else{
                if(stack.empty()==true) return false;
                else{
                    if(check(stack.top(), s[i])==false) return false;
                    
                    stack.pop();
                }
            }
            i++;
        }
        if(stack.empty()) return true;
        else return false;
    }
};