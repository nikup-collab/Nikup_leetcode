class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        
        vector<int> pf(n+1,0);
        //pf[0]=0;
        
        for(int i=1;i<=n;i++){
            pf[i]=pf[i-1]+nums[i-1];
        }
        
        
        //creating sub array
        vector<int> subarr;
        
        //creating sub array sum array
        for(int i=0;i<n;i++){
            for(int j=i+1;j<=n;j++){
                int sum = pf[j]-pf[i];
                subarr.push_back(sum);
            }
        }
        sort(subarr.begin(),subarr.end());
        
        long long ans=0;
        for(int i=left;i<=right;i++){
            ans+= subarr[i-1];
        }
        int mods=1e9+7;
        
        return ans%mods;
    }
};