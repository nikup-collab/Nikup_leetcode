class Solution {
public:
    int minPairSum(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        
        int i=0, j=nums.size()-1;
        int maxi= INT_MIN;
        while(i<j){
            
            int sum = nums[i]+nums[j];
            if(sum > maxi){
                maxi= sum;
            }
            i++;
            j--;
            
        }
        
        return maxi;
    }
};