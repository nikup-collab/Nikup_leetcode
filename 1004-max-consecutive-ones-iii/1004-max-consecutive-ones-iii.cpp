class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i=0, j=0, count=0, ans=0;
        
        while(j<nums.size()){
            
            if(nums[j]==0) count++;
            if(count<=k){
                ans=max(ans,j-i+1);
                j++;
            } 
            
            else{
                while(count>k){
                
                if(nums[i]==0) count--;
                
                i++;
                }
                j++;
            }
        }
            
           
            
        
    
        return ans;
    }
};