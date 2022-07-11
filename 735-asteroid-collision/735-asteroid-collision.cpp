class Solution {
public:
    vector<int> asteroidCollision(vector<int>&s) {
        stack<int>stack;
        
        for(int i=0;i<s.size();i++){
            
            if(s[i]>0 || stack.empty()) stack.push(s[i]);
            else{
                while(!stack.empty() and stack.top()>0 and stack.top()<abs(s[i]) )
                    stack.pop();
                if(!stack.empty() and stack.top()==abs(s[i]))
                    stack.pop();
                else{
                 if(stack.empty() || stack.top() < 0) {
                        stack.push(s[i]);
                    }

                }
                
            }
        }
        vector<int>vect;
        
        while(stack.size()>0){
            vect.push_back(stack.top());
            stack.pop();
        }
        reverse(vect.begin(),vect.end());
        
        return vect;
    }
};