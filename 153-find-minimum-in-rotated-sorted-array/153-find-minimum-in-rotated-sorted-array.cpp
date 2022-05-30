class Solution {
public:
    int findMin(vector<int>& nums) {
        int lo=0, hi=nums.size()-1;
        int mid;
        int min=nums[0];
        while(lo<=hi){
            int mid= lo + (hi-lo)/2;
            if(nums[mid]>=nums[0])
                lo = mid+1;
            else{
                min=nums[mid];
                hi=mid-1;
            }
        }
        return min;
        
    }
};