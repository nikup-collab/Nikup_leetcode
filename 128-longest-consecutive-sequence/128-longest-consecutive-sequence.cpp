class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        if(nums.size()==0) return 0;
        sort(nums.begin(), nums.end());
        int longseq=1;
        int currseq=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                if(nums[i]==nums[i-1]+1){
                    currseq+=1;
                }
                else{
                longseq=max(currseq, longseq);
                currseq=1;
            }
            }
        }
        return max(currseq, longseq);
        
    }
};