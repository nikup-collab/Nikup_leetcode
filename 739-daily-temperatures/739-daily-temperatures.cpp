class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& A) {
        vector<int> vect;
        
        stack<pair<int,int>>stack;
         int n=A.size();
        
        for(int i=n-1;i>=0;i--){
            
            if(stack.size()==0) vect.push_back(0);
            else if(stack.size()>0 && stack.top().first>A[i]) vect.push_back(stack.top().second-i);
            
            else if(stack.size()>0 && stack.top().first<=A[i]){
                
                while(stack.size()>0 && stack.top().first<=A[i]){
                    stack.pop();
                }
                
                if(stack.size()==0) vect.push_back(0);
                else vect.push_back(stack.top().second-i);
            }
            stack.push({A[i],i});
            
        }
        
            reverse(vect.begin(),vect.end());
        return vect;

    }
};