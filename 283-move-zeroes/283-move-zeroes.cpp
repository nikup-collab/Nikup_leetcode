class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int start=0;
        int end = 1;
        while(end != nums.size()){
            if(nums[start]==0){
                if(nums[end]!=0){
                    swap(nums[start],nums[end]);
                    start++;
                    end++;
                }
                else{
                       end++;
                    }
                }
            else{
                if(nums[end]!=0)
                    end++;
                else{
                    
                    start++;
                    
                }
                
            
            }
            
        }
        
    }
};