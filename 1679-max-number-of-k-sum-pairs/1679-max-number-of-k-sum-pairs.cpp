class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        
        sort(nums.begin(),nums.end());
        int ans=0;
        int pointer1=0, pointer2=nums.size()-1;
        
        while(pointer1<pointer2){
            
            if(nums[pointer1]+nums[pointer2]>k) pointer2--;
            else if( nums[pointer1]+nums[pointer2]<k) pointer1++;
            else{
                ans++;
                pointer1++;
                pointer2--;
            }
        }
        return ans;
        
    }
};