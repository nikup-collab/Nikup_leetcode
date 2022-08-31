bool check(vector<int> nums, int l , int j, int k){
    nums.erase(nums.begin()+k);
    for(int i=l;i<nums.size()-1; i++){
        
        if(nums[i] >= nums[i+1]) return false;
    }
    return true;
}



class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        
         
        for(int i=0;i<nums.size() ; i++){
              
            
            if(check(nums,0, nums.size()-1, i)==true) return true;
        }
       return false; 
    }
};