int pf[1000];
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>vect;
        pf[0]=0;
        
        
        for(int i=1;i<=nums.size();i++){
            pf[i]=pf[i-1]+nums[i-1];
            vect.push_back(pf[i]);
        }
        return vect;
    }
};