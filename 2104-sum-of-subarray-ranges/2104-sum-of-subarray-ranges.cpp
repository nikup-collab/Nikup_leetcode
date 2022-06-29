class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int n= nums.size();
        
        long long sum=0;
        for(int i=0; i<n; i++){
            int maximum=nums[i], minimum =nums[i];
            for(int j=i;j<n;j++){
                maximum=max(nums[j],maximum);
                minimum=min(minimum,nums[j]);
                sum+=(maximum-minimum);
                
            
                
               
            }
        }
        return sum;
    }
};