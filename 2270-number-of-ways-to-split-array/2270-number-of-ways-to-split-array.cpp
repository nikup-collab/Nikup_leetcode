class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
      //in this question we will find prefix sum from start and end separately
        //and check twwo array
        
        
        int n=nums.size();
        long long pf[n];
        long long pfs[n];
        int count=0;
        
        pf[0]=nums[0];
        pfs[n-1]=0;
        
        for(int i=1;i<n;i++){
            pf[i]=pf[i-1]+nums[i];
        }
        
        for(int i=n-2;i>=0;i--){
            pfs[i]=pfs[i+1]+nums[i+1];
        }
        
        for(int i=0;i<n-1;i++){
           if( pf[i]>=pfs[i]) count++;
        }
        return count;
    }
};