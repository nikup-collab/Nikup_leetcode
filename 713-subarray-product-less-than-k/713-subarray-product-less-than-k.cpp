class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1) return 0;
        int i=0, j=0, res=0;
        long long pr=1;
        
        while(j<nums.size()){
            
            pr= pr*nums[j];
            
            if(pr<k){
                res+=(j-i+1);
                j++;
            }
            
            else if( pr>=k){
                
                while(pr>=k){
                    pr=pr/nums[i];
                    i++;
                }
                res+=(j-i+1);
                j++;
            }
            
        }
        return res;
        
    }
};