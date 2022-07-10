class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> v(nums1.size(),-1);
        
        int n=nums2.size();
        
        for(int i=0;i<nums1.size();i++){
            
            stack<int>stack;
            for(int j=n-1;j>=0;j--){
                stack.push(nums2[j]);
                
                if(stack.top()==nums1[i])
                    break;
            }
            
            while(stack.size()>0 && stack.top()<=nums1[i]) stack.pop();
            
            if(stack.size()!=0) v[i]=stack.top();
        }
        return v;
    }
};