class Solution {
public:
    int triangularSum(vector<int>& nums) {
        
        while(nums.size()!=1){
            
            vector<int>vect;
            
            for(int i=0;i<nums.size()-1;i++){
                
                long long sum = nums[i]+nums[i+1];
                vect.push_back(sum%10);
            }
            
            nums.clear();
            
            nums=vect;
            
        }
        return nums[0];
    }
};