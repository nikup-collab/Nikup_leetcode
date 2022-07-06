class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i=0, j=0, count=0, ans=0;
        
        while(j<nums.size()){
            
            if(nums[j]==0) count++;
            
            if(count<=1){
                ans=max(ans, j-i);
                j++;
            }
            
            else if(count>1){
                
                while(count>1){
                    if(nums[i]==0) count--;
                    i++;
                }
                j++;
            }
        }
        return ans;
        
    }
};