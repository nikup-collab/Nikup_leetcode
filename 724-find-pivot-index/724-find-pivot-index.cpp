class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n= nums.size();
        int pf[n];
        int pfs[n];
        pf[0]=nums[0];
        pfs[n-1]=nums[n-1];
        //prefix sum approach
        for(int i=1;i<n;i++){
            pf[i]=pf[i-1]+nums[i];
            
        }
        
        for(int i=n-2;i>=0;i--){
            pfs[i]=pfs[i+1]+nums[i];
        }
        
        for(int i=0;i<n;i++){
            if(pf[i]==pfs[i]) return i;
        }
       return -1; 
    }
};