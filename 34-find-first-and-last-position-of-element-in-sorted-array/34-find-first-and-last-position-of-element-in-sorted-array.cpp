class Solution {
public:

    
    int firstposition(vector<int> &nums, int target){
        int res=-1;
        int lo=0, hi=nums.size()-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            
            if(nums[mid]==target){
                res=mid;
                hi=mid-1;
                
            } 
            
           else if(nums[mid]>target) hi=mid-1;
            else lo=mid+1;
        }
        return res;
    }
    
    
    
    int lastposition(vector<int> &nums, int target){
        int r=-1;
        int lo=0, hi=nums.size()-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            
            if(nums[mid]==target){
                r=mid;
                lo=mid+1;
            } 
            
           else  if(nums[mid]>target) hi=mid-1;
            else lo=mid+1;
        }
        return r;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v;
        
        v.push_back(firstposition(nums,target));
        v.push_back(lastposition(nums,target));
        
        return v;
        
        
        
    }
};