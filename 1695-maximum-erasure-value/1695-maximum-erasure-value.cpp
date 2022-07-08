#include<numeric>
class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_map<int,int>m;
        int i=0, j=0;
        int ans=0, sum=0;
        
        while(j<nums.size()){
            
            m[nums[j]]++;
            //sum=sum+nums[j];
            
            
            if(m[nums[j]]>1){
               
                ans=max(ans, sum);
                
                while(m[nums[j]]>1){
                    
                    m[nums[i]]--;
                    sum=sum-nums[i];
                    i++;
                }
            }
            sum=sum+nums[j];
            j++;
            
            
        }
        return max(ans,sum);
        
        
    }
};