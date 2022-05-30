class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        int lo=0, hi = nums.size()-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(mid==0 || mid == nums.size()-1)
                return nums[mid];
          
            if(nums[mid]==nums[mid-1]){
                if((mid+1)%2==0) lo=mid+1;
                else hi=mid;
                
            }
            else if(nums[mid]==nums[mid+1]){
                if((mid+1)%2==0) hi=mid-1;
                else lo=mid;
            }
            else
                return nums[mid];
        }
        return -1;
    }
};