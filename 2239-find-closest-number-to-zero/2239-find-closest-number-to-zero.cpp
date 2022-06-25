class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
       int ans=INT_MAX;
        for(auto x:nums){
            if(x==0)
                return x;
            ans=min(ans,abs(x));
        }
        for(auto x:nums){
            if(x==ans)
                return ans;
        }
        return -ans;

    }
};