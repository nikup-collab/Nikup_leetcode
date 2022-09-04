class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        int i=0, j=nums.size()-1;
        
        int mid = (i+j)/2;
        
        int answer=0;
        
        for(int i=0;i<nums.size();i++){
            
            answer += abs(nums[i]-nums[mid]);
        }
        
        return answer;
    }
};