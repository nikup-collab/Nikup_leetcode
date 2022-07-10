void reverse(string &s, int &st,int &en){
    int start=st+1;
    int end=en-1;
    while(start<end){
        swap(s[start],s[end]);
        start++;
        end--;
    }
}




class Solution {
public:
    string reverseParentheses(string s) {
        
        stack<pair<int,int>> stack;
        int i=0;
        while(i<s.size()){
            
            if(s[i]=='('){
                
             stack.push({s[i],i});
                i++;
            }
            else if(s[i]==')'){
                
                reverse(s, stack.top().second, i);
                s.erase(s.begin()+i);
                s.erase(s.begin()+stack.top().second);
                stack.pop();
                i--;
            }
            else i++;
        }
        return s;
        
    }
};