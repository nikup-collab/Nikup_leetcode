int first(vector<int> &nums, int x){
    int rs=-1;
    int lo=0, hi=nums.size()-1;
    while(lo<=hi){
        int mid= lo+(hi-lo)/2;
        if(nums[mid]>x)
            hi=mid-1;
        else if(nums[mid]<x)
            lo=mid+1;
        else{
            rs=mid;
            hi=mid-1;
        }
    }
    return rs;
}


int second(vector<int> &nums, int x){
    int res=-1;
    int lo=0 ,  hi=nums.size()-1;
    while(lo<=hi){
        int mid= lo+(hi-lo)/2;
        if(nums[mid]>x)
            hi=mid-1;
        else if(nums[mid]<x)
            lo=mid+1;
        else{
            res=mid;
            lo=mid+1;
        }
    }
    return res;
}











class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> vect;
        int fp=first(nums, target);
        vect.push_back(fp);
        int lp=second(nums,target);
        vect.push_back(lp);
        return vect;
    }
};