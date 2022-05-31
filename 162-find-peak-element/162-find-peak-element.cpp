class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int lo=0, hi=nums.size()-1;
        
        if(nums.size()==1) return 0;
        if(nums[lo]>nums[lo+1]) return lo;
        if(nums[hi]>nums[hi-1]) return hi;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
           
             if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1])
                return mid;
            if(nums[mid]<nums[mid-1])
                hi=mid;
            else
                lo=mid;
        }
        return -1;
    }
};