class Solution {
public:
    bool isValid(string s) {
        
        vector<char>stack;
    
        for(int i=0;i<s.size();i++){
            stack.push_back(s[i]);
            int n=stack.size();
            if(n>=3){
                if(stack[n-1]=='c' && stack[n-2]=='b' && stack[n-3]=='a' ){
                    stack.pop_back();
                                        stack.pop_back();
                                        stack.pop_back();
                }
            }
        }
       
        return (stack.size()==0);
    }
};