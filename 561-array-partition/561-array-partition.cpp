class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        long long answer=0;
        
        for(int i=0;i<nums.size()-1;i+=2){
            answer += min(nums[i],nums[i+1]);
        }
        return answer;
    }
};