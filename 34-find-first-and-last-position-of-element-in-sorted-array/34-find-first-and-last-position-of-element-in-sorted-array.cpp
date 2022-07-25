class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int>vect;
        if(nums.size()==0){
            vect.push_back(-1);
            vect.push_back(-1);
        }
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                vect.push_back(i);
                break;
            }
            if(i==nums.size()-1) vect.push_back(-1);
        }
        reverse(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                vect.push_back(nums.size()-i-1);
                break;
            }
            if(i==nums.size()-1) vect.push_back(-1);
        }
        return vect;
    }
};