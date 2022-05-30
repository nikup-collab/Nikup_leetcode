class Solution {
public:
    int findMin(vector<int>& nums) {
       int lo=0, hi = nums.size()-1;
        int min=nums[lo];;
        while(lo<=hi){
            int mid= lo + (hi - lo)/2;
            if(nums[mid]>min)
                lo=mid+1;
            else if(nums[mid]<min){
                min=nums[mid];
                hi=mid-1;
            }
            else{
               min=nums[lo];
                lo++;
            }
        }
        return min;
    }
};