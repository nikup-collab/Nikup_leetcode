class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int currmax=0;
        int ans=INT_MIN;
        
        for(int i=0;i<nums.size(); i++){
            
            if(nums[i]==1) currmax++;
            else{
                ans=max(currmax,ans);
                currmax=0;
            }
        }
        return max(ans,currmax);
    }
};