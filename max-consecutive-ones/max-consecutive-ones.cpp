class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count =0, rmax=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
                if(count>rmax)
                    rmax=count;
            }
            else
                count=0;
        }
        return rmax;
        
    }
};