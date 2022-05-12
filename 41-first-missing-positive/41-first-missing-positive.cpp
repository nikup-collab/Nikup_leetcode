class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int sm=1;
        sort(begin(nums),end(nums));
        for(int i=0;i<nums.size();i++){
            if(nums[i]==sm)
                sm++;
            else
                continue;
            
        }
        return sm;
    }
};