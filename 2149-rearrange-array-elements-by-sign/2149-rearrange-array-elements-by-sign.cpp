class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> posarr;
        vector<int> negarr;
        vector<int> ans;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0) posarr.push_back(nums[i]);
            else negarr.push_back(nums[i]);
        }
        
        int i=0, j=0;
        

        while(i<n/2 || j<n/2){
            
            ans.push_back(posarr[i]);
            i++;
            ans.push_back(negarr[j]);
            j++;
            
        }
        return ans;
    }
};